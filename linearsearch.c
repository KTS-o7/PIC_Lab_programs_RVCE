//Linear search code
#include<stdio.h>
int main()
{
    int n,b,i,j;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&b);
    for (j=0;j<n;j++)
    {
        if (a[j]==b)
        {
            printf("The element is found in %d place\n",j+1);
        return 1;
        }

    }
    printf("Element not found\n");
    return 0;
} 
