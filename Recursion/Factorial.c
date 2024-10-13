#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("\nFactorial of %d: %d\n", num, factorial(num));
    return 0;
}
