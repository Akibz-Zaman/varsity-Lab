#include <stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2) isPrime = 0;

    for (int i = 2; isPrime && i * i <= n; i++) {
        if (n % i == 0) isPrime = 0;
    }

    printf("%d is %sprime.\n", n, isPrime ? "" : "not ");
    return 0;
}
