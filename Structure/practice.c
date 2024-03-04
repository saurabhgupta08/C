#include <stdio.h>

struct student
{
    int rollno;
    char favchar;
    float marks;
};

int main()
{
    struct student S1;

    S1.rollno=25;
    S1.favchar='S';
    S1.marks=25.25;
    
    printf("%d\n",S1.rollno);
}