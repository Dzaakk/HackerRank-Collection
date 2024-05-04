#include <stdio.h>
#include <stdlib.h>4

int birthdayCakeCandles(int candles_count, int *candles)
{
    int max = 0, counter = 0;
    for (int i = 0; i < candles_count; i++)
    {
        if (max < candles[i])
        {
            max = candles[i];
            counter = 1;
        }
        else if (max == candles[i])
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    int candles_count;

    scanf("%d", &candles_count);

    int *candles = (int *)malloc(candles_count * sizeof(int));

    for (int i = 0; i < candles_count; i++)
    {
        scanf("%d", &candles[i]);
    }

    int count = birthdayCakeCandles(candles_count, candles);

    printf("%d", count);

    free(candles);
    return 0;
}