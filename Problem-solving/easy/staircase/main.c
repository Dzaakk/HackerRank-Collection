#include <stdio.h>

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    staircase(n);

    return 0;
}