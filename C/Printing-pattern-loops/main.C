#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Calculate the size of the 2D array
    int size = 2 * n - 1;

    // Initialize a 2D array to store the pattern
    int pattern[size][size];

    // Fill the array with the pattern
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            pattern[i][j] = n;
        }
    }

    // Modify the array to create the required pattern
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < size - i; j++)
        {
            pattern[i][j] = n - i;
            pattern[size - 1 - i][j] = n - i;
            pattern[j][i] = n - i;
            pattern[j][size - 1 - i] = n - i;
        }
    }

    // Print the pattern
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }

    return 0;
}
