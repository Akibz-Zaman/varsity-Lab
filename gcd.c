#include <stdio.h>

int main() {
    int a,b,c,gcd;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    while(a%b!=0)
    {
        c=a%b;
        a = b;
        b = c;
    }

    printf("GCD = %d\n",c);

    return 0;
}
