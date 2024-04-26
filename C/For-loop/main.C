#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    char *number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 1)
            {
                printf("odd\n");
            }
            else
                printf("even\n");
        }
        else
            printf("%s\n", number[i - 1]);
    }
    return 0;
}
