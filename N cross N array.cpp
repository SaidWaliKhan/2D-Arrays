#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    int a[n][n];
    int b[n][n];
    int mul[n][n];
    int i, j, k;

    printf("Please enter the first matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Please enter the second matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The multiplication is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf(" %d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

	