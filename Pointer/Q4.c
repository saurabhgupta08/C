#include<stdio.h>

void main(){
    int a ,b ,*ptr1,*ptr2;
    printf("Enter your two numbers\n");
    scanf("%d %d",&a ,&b);
    ptr1=&a;
    ptr2=&b;
    printf("sum of %d and %d is %d\n",a,b,(*ptr1+*ptr2));
    
}