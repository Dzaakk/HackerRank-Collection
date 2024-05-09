int *breakingRecords(int scores_count, int *scores, int *result_count)
{
    int *result = (int *)malloc(2 * sizeof(int));
    int min = scores[0], max = scores[0];
    int counterMax = 0, counterMin = 0;

    for (int i = 1; i < scores_count; i++)
    {
        if (scores[i] < min)
        {
            counterMin++;
            min = scores[i];
        }
        else if (scores[i] > max)
        {
            counterMax++;
            max = scores[i];
        }
        else
            continue;
    }
    result[0] = counterMax;
    result[1] = counterMin;
    *result_count = 2;
    return result;
}