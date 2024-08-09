
// Wap in c to implement product of 2X2 boolean matrix;
#include <stdio.h>

void input(int mat[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int main()
{
    int matA[2][2], matB[2][2], matC[2][2];

    printf("Enter first matrix of order 2x2: \n");
    input(matA);

    printf("Enter second matrix of order 2x2: \n");
    input(matB);
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matC[i][j] = matA[i][0] && matB[0][j]
                || matA[i][1] && matB[1][j];
        }
    }

    printf("\nThe matrix multiplication\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
