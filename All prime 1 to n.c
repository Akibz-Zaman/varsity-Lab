#include <stdio.h>

int main() {
    int n, i, j, count = 0;

    printf(" Enter num:  ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            count++;
        }
    }
    printf("Total prime numbers from 1 to %d: %d\n", n, count);
    return 0;
}
