#include <stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Enter num: ");
    scanf("%d", &n);

    if (n == 0 , n == 1) {
        printf("%d is a Fibonacci number.\n", n);
        return 0;
    }

    while (b < n) {
        b = a + b;
        a = b - a;
    }

    if (b == n) {
        printf("%d is a Fibonacci number.\n", n);
    } else {
        printf("%d is not a Fibonacci number.\n", n);
    }

    return 0;
}
