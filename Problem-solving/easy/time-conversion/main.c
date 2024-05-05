#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *timeConversion(char *s)
{
    int hh, mm, ss;

    sscanf(s, "%d:%d:%d", &hh, &mm, &ss);

    if (strstr(s, "PM") != NULL && hh != 12)
    {
        hh += 12;
    }

    if (strstr(s, "AM") != NULL && hh == 12)
    {
        hh = 0;
    }

    char *result = (char *)malloc(9 * sizeof(char));

    sprintf(result, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}

int main()
{
    char s[] = "08:05:45PM";

    printf("%s\n", timeConversion(s));

    return 0;
}