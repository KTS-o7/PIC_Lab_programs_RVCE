//binary search code
#include<stdio.h>
int main()
{
    int n,b,i,j,first,last,mid;
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
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while (first<= last)
    {
        if(a[mid]<b)
        {
            first=mid+1;
        }
        else if (a[mid]==b)
        {
            printf("The element is found at %d",mid+1);
            return 1;
        }
        else
        {
            last =mid-1;
        }
        mid=(first+last)/2;
        if (first>last)
        {
            printf("element not found\n");

        }
    }
        return 0;
    
  
}

