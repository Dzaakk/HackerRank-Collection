int simpleArraySum(int ar_count, int *ar)
{
    int counter = 0;
    for (int i = 0; i < ar_count; i++)
    {
        counter += ar[i];
    }
    return counter;
}