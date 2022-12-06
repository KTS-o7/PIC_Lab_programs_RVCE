#include <stdio.h>
#include <string.h>

void check(char str[])
{
    int n = strlen(str);
    int flag = 0, i;
    for (i = 0; i < n; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The string is not a palindrome \n");
    }
    else
    {
        printf("The string is a palindrome \n");
    }
}

int main()
{
    char str[19];
    printf("Enter the string to be checked\n");
    scanf("%s", str);
    printf("Enetered string is %s \n", str);
    check(str);
    return 0;
}