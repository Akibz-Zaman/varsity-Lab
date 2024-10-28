#include <stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Enter num: ");
    scanf("%d", &n);

    printf("Fibonacci numbers from 1 to %d:\n", n);

    while (b <= n) {
        if (b > 0) {
            printf("%d ", b);
        }
        b = a + b;
        a = b - a;
    }

    printf("\n");
    return 0;
}
