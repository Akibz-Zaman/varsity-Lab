#include <stdio.h>

int main() {
    int a,b,c,prod,lcm,gcd;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    prod = a*b;

    while(a%b!=0)
    {
        c=a%b;
        a = b;
        b = c;
    }

     printf("GCD = %d\n",c);
    gcd = c;
    lcm = prod/gcd;

    printf("LCM = %d\n",lcm);
    return 0;
}
