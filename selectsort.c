#include <stdio.h>
int main()
{
    int a, b, c, i, j, n, ind;
    printf("Enter the size of the array to be sorted\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The unsorted array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        ind = i;
        for (j = i; j < n; j++)
        {
            if (arr[ind] > arr[j])
            {
                ind = j;
            }
        }
        b = arr[ind];
        arr[ind] = arr[i];
        arr[i] = b;
    }

    printf("\n");
    printf("The sorted array is \n");
    for (c = 0; c < n; c++)
    {
        printf("%d ", arr[c]);
    }
    return 0;
}