#include <stdio.h>

int main()
{
    int i, j, a, b, c, m, n, p, q, k;
    printf("This program performs matrix multiplication of the needed order\n");

    printf("Enter the order of  matrix A\n");
    scanf("%d%d", &m, &n);
    printf("Order of matrix A is (%d,%d)\n", m, n);
    printf("Enter the order of the second matrix B \n");
    scanf("%d%d", &p, &q);
    printf("Order of the matrix B is (%d,%d)\n", p, q);

    if (n != p)
    {
        printf("Matrix multiplication is not possible\n");
    }

    else
    {
        int A[m][n], B[p][q], R[m][q];

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the element a[%d][%d]\n", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }

        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("Enter the element b[%d][%d]\n", i + 1, j + 1);
                scanf("%d", &B[i][j]);
            }
        }

        printf("The Matrix A is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }

        printf("The Matrix B is\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

        printf("The order of resultant matrix is (%d,%d)\n", m, q);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                R[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    R[i][j] = R[i][j] + (A[i][k] * B[k][j]);
                }
            }
        }

        printf("The Resultant matrix is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ", R[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
