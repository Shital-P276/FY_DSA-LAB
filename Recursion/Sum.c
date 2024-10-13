#include <stdio.h>

int sumOfPositiveIntegers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfPositiveIntegers(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    printf("\nSum of first %d positive integers: %d", n, sumOfPositiveIntegers(n));
    return 0;
}
