#include<stdio.h>

int isPrime(int n){
   int c =0;
   if(n==0 || n==1 || n==2 ){
    return c;
   }
   for (int i = 2; i < n; i++)
   {
    if (n%i==0)
    {
        c++;
        return c;
    }
    
   }
   return c;
   
}

int main(){
    int n ;
    printf("Enter a number \n");
    scanf("%d",&n);
    int c= isPrime(n);
    if (c==0)
    {
        printf("%d is prime numbr ",n);
    }
    else{
        printf("%d is not a prime number ",n);
    }
    return 0;
}