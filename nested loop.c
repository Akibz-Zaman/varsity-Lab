#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2)
        {
        printf("%d is not prime.\n", n);
        }

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++)
            {
            if (i % j == 0) {
                isPrime = 0;
                break;}
        }

        if (isPrime && i == n)
        {
            printf("%d is prime.\n", n);
        }
    }

    printf("%d is not prime.\n", n);
    return 0;
}
