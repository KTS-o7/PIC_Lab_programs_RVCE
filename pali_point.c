#include <stdio.h>
int check(char *str1, char *str2)
{
    int flag = 0;
    while (*str1 == *str2)
    {
        if (*str1 == '\0' && *str2 == '\0')
        {
            flag = 1;
            break;
        }
        str1++;
        str2++;
    }
    return flag;
}

int main()
{
    char string1[20], string2[20];
    scanf("%s", string1);
    scanf("%s", string2);

    int flag = check(string1, string2);
    if (flag != 0)
        printf("SAME STRINGS\n");
    else
        printf("NOT SAME\n");
    return 0;
}