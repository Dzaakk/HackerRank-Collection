int birthday(int s_count, int *s, int d, int m)
{
    int sum = 0, max_sum = 0, count = 0;

    for (int i = 0; i < m; i++)
    {
        max_sum += s[i];
    }
    sum = max_sum;
    if (sum == d)
    {
        count++;
    }

    for (int i = m; i < s_count; i++)
    {
        sum += s[i];
        sum -= s[i - m];
        if (sum == d)
        {
            count++;
        }
    }

    return count;
}