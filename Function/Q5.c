#include <stdio.h>
int isprime(int n);
void main() {
    int n, c=0;
    printf("\nEnter n: ");
    scanf("%d", &n);

    c = isprime(n);
    if(c > 0) 
        printf("\nNumber %d is not prime.\n", n);
    else 
        printf("\nNumber %d is prime.\n", n);
}        

int isprime(int n) {
    int i, c=0;
    for(i=2; i<n; i++) {
        if(n % i == 0) {
            c++;
            break;
        }
    }
    return c;
}
