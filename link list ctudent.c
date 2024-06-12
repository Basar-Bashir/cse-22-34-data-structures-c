#include <stdio.h>
#include <string.h>

struct book {
    int rollno,marks;
    char name[50];
    struct book* next;
};

int main() {
    struct book s1,s2,s3;

    s1.rollno = 1;
    s1.marks=100;
    strcpy(s1.name, "xyzz1");
    s1.next = &s2;


    s2.rollno = 2;
s2.marks = 90;
    strcpy(s2.name, "xyzz2");
    s2.next = &s3;


    s3.rollno = 3;
    s3.marks = 80;
    strcpy(s3.name, "xyzz3");
    s3.next = NULL;

      

    printf("%d", s1.next->marks);
    return 0;
}