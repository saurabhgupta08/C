#include<stdio.h>

void main (){
    int a, *ptr;
    printf("Enter value of a ");
    scanf("%d",&a);
    ptr = &a;
    printf("value of a is %d\nAddress of a is %d\n",a,ptr);
}