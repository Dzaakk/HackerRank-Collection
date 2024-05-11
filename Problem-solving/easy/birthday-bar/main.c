int birthday(int s_count, int *s, int d, int m)
{
    int counter = 0, sum = 0;
    for (int i = 0; i < s_count; i++)
    {
        sum = 0;
        for (int j = i; j < m + 1 && j < s_count; j++)
        {
            sum += s[j];
            if (d == sum)
            {
                counter++;
            }
        }
    }
    return counter;
}