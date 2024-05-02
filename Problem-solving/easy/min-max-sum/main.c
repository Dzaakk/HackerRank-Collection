#include <stdio.h>

void miniMaxSum(int arr_count, int *arr)
{
    long total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }
    int min = arr[0];
    int max = arr[0];

    for (int j = 1; j < 5; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    printf("%ld %ld\n", total - max, total - min);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    miniMaxSum(5, arr);
    return 0;
}