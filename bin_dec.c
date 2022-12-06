#include <stdio.h>
int binary(int num)
{
    if (num == 0)
        return 0;
    else
        return (num % 2 + 10 * binary(num / 2));
}

int decimal(int num)
{
    if (num == 0)
        return 0;
    else
        return (num % 10 + 2 * decimal(num / 10));
}

int main()
{
    int num, num1, num2, bin, deci;
    printf("enter the number to convert to binary\n");
    scanf("%d", &num);
    printf("enter the number to convert to decimal \n");
    scanf("%d", &num2);
    num1 = num;
    bin = binary(num);
    deci = decimal(num2);
    printf("The binary of %d is %d\n", num1, bin);
    printf("the decimal of %d is %d \n", num2, deci);
    return 0;
}