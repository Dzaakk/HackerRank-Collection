#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int *apples, int oranges_count, int *oranges)
{
    int counterA = 0, counterO = 0;

    for (int i = 0; i < apples_count; i++)
    {
        int appleDistance = apples[i] + a;
        if (appleDistance >= s && appleDistance <= t)
        {
            counterA++;
        }
    }

    for (int j = 0; j < oranges_count; j++)
    {
        int orangeDistance = oranges[j] + b;
        if (orangeDistance >= s && orangeDistance <= t)
        {
            counterO++;
        }

        printf("%d\n%d", counterA, counterO);
    }
}

int main()
{
    int s, t, a, b, apples_count, oranges_count;

    printf("enter s and t:");
    scanf("%d %d", &s, &t);
    getchar();
    printf("enter a and b:");
    scanf("%d %d", &a, &b);
    getchar();
    printf("enter apples count and oranges count:");
    scanf("%d %d", &apples_count, &oranges_count);

    int *apples = (int *)malloc(apples_count * sizeof(int));
    int *oranges = (int *)malloc(oranges_count * sizeof(int));

    for (int i = 0; i < apples_count; i++)
    {
        scanf("%d", apples + i);
        getchar();
    }
    for (int j = 0; j < oranges_count; j++)
    {
        scanf("%d", oranges + j);
        getchar();
    }

    countApplesAndOranges(s, t, a, b, apples_count, apples, oranges_count, oranges);

    return 0;
}