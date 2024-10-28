#include <stdio.h>

int main() {
    int x, y, result = 1;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    while (y > 0) {
        result *= x;
        y--;
    }
    printf("Result: %d\n", result);
    return 0;
}
