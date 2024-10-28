#include <stdio.h>

int main() {
    int n,i,j;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        int isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
