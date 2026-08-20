#include <stdio.h>

int main()
{
    int a[5][5] = {
        {25, 10, 5, 18, 30},
        {12, 7, 22, 3, 15},
        {40, 8, 1, 35, 20},
        {17, 6, 28, 11, 9},
        {32, 14, 4, 19, 26}
    };

    int b[25];
    int i, j, k = 0, temp;

    // 1. Copy 2D array into 1D array
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }

    // 2. Sort the 1D array
    for (i = 0; i < 24; i++)
    {
        for (j = i + 1; j < 25; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // 3. Copy sorted 1D array back to 2D array
    k = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            a[i][j] = b[k];
            k++;
        }
    }

    // 4. Display sorted 2D array
    printf("Sorted 5 x 5 array:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
