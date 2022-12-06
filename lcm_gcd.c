#include <stdio.h>

int hcf(int n1, int n2)
{
    int num = n1 % n2;
    if (num == 1)
        return 1;
    else if (num == 0)
        return n2;
    else
        num = hcf(n2, num);
}

int LCM(int n1, int n2)
{
    int num3 = n1 * n2 / (hcf(n1, n2));
}

int main()
{
    int num1, num2, gcd, lcm;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        gcd = hcf(num1, num2);
        lcm = LCM(num1, num2);
    }
    else
    {
        gcd = hcf(num2, num1);
        lcm = LCM(num2, num1);
    }
    printf("GCD is %d \n", gcd);
    printf("LCM is %d \n", lcm);
    return 0;
}