void plusMinus(int arr_count, int *arr)
{
    float countA = 0.0, countB = 0.0, countC = 0.0;
    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > 0)
        {
            countA++;
        }
        else if (arr[i] < 0)
        {
            countB++;
        }
        else
        {
            countC++;
        }
    }
    countA /= arr_count;
    countB /= arr_count;
    countC /= arr_count;

    printf("%f\n%f\n%f", countA, countB, countC);
}