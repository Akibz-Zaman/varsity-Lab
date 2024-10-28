#include <stdio.h>

int main() {
    int num, i = 2;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not prime.\n", num);
        return 0;
    }

    while (i * i <= num) {
        if (num % i == 0) {
            printf("%d is not prime.\n", num);
            return 0;
        }
        i++;
    }

    printf("%d is prime.\n", num);
    return 0;
}
