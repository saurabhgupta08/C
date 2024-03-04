#include <stdio.h>

float SimpleInterest(float principal, float rate, float time);

int main() {
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    interest = SimpleInterest(principal, rate, time);
    printf("Simple Interest = %.3f\n", interest);
    return 0;
}

float SimpleInterest(float principal, float rate, float time) {
    float simpleInterest;
    simpleInterest = (principal * rate * time) / 100;
    return simpleInterest;
}