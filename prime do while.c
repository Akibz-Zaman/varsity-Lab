#include <stdio.h>

int main() {
    int n, i = 2, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2) isPrime = 0;

    do {
        if (n % i++ == 0) isPrime = 0;
    } while (isPrime && i * i <= n);

    printf("%d is %sprime.\n", n, isPrime ? "" : "not ");
    return 0;
}
