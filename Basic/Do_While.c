#include<stdio.h>

int main(){
    int i = 0;

    do {
    printf("%d\n", i);
    i++;
    }
    while (i < 5);

    for (int i = 0; i < 5; i++)
    {
        printf("Hello \n");
    }
    
    return 0;
}