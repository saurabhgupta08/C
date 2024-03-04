#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    if (num == 2) {
        return 1; // 2 is a prime number
    }

    if (num % 2 == 0) {
        return 0; // Even numbers greater than 2 are not prime
    }

    // Check for divisibility by odd numbers from 3 up to the square root of num
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0; // If num is divisible by any odd number, it's not prime
        }
    }

    return 1; // If no divisors were found, num is prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
