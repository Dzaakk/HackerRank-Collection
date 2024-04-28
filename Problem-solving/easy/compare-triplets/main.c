int *compareTriplets(int a_count, int *a, int b_count, int *b, int *result_count)
{
    int *result = malloc(2 * sizeof(int));
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < a_count; i++)
    {
        if (a[i] > b[i])
        {
            result[0]++;
        }
        else if (a[i] < b[i])
        {
            result[1]++;
        }
        else
        {
            continue;
        }
    }

    *result_count = 2;

    return result;
}