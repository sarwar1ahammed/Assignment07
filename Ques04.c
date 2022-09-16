#include <stdio.h>
int main()
{
    // calculate HCF of two numbers

    int a, b, i, HCF;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    for (i=1; i<=a*b; i++)
    {
        if (i % a == 0 && i % b == 0)
        break;
    }
    // Value of 'i' is LCM

    HCF = (a*b)/i;
    printf("HCF is %d", HCF);
    
    return 0;
}