#include<stdio.h>
int main()
{
    int a,b,c,i,j,n;
    printf("Enter the size of the array to be sorted\n");
    scanf("%d",&n);
     int arr[n];
    printf("Enter the elements of the array\n");
   
    for ( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The unsorted array is \n");
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    for (i=1;i<n;i++)
    {
        for ( j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b;
            }
        }
    }
    
    
printf("\n");
     printf("The sorted array is \n");
    for (c=0;c<n;c++)
    {
        printf("%d ",arr[c]);
    }
    return 0;

}