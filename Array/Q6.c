#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++; 
    }
    printf("Sum of the elements in the array is: %d\n", sum);
    return 0;
}