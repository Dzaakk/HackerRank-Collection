#include <stdio.h>

void update(int *a, int *b)
{
    int newA = *a;

    *a = *a + *b;
    *b = abs(newA - *b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}