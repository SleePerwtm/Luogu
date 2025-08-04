#include <stdio.h>

int main()
{
    int n, T, sum = 0, first = 1, previous;
    scanf("%d%d", &n, &T);
    while (n > 0)
    {
        int start, end;
        scanf("%d%d", &start, &end);
        if (first)
        {
            first = 0;
        }
        else if (start - previous > T)
            sum += start - previous - T;
        previous = end;

        n--;
    }
    printf("%d", sum);

    return 0;
}