char *kangaroo(int x1, int v1, int x2, int v2)
{
    if (v1 <= v2)
    {
        return "NO";
    }
    else
    {
        if (abs(x1 - x2) % abs(v1 - v2) == 0)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
    return "YES";
}