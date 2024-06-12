#include <stdio.h>
#include <string.h>

struct book {
    int price;
    char name[50], author[10], publication[10];
    struct book* next;
};

int main() {
    struct book b1, b2, b3, b4, b5;

    // b1
    b1.price = 100;
    strcpy(b1.name, "xyzz1");
    strcpy(b1.author, "xxyyzz1");
    strcpy(b1.publication, "xyz1");
    b1.next = &b2;

    // b2
    b2.price = 200;
    strcpy(b2.name, "xyzz2");
    strcpy(b2.author, "xxyyzz2");
    strcpy(b2.publication, "xyz2");
    b2.next = &b3;

    // b3
    b3.price = 300;
    strcpy(b3.name, "xyzz3");
    strcpy(b3.author, "xxyyzz3");
    strcpy(b3.publication, "xyz3");
    b3.next = &b4;

    // b4
    b4.price = 400;
    strcpy(b4.name, "xyzz4");
    strcpy(b4.author, "xxyyzz4");
    strcpy(b4.publication, "xyz4");
    b4.next = &b5;

    // b5
    b5.price = 500;
    strcpy(b5.name, "xyzz5");
    strcpy(b5.author, "xxyyzz5");
    strcpy(b5.publication, "xyz5");
    b5.next = &b1;    

    printf("%s", b1.next->next->next->next->next->name);
    return 0;
}