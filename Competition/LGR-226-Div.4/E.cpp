#include <stdio.h>

int main()
{
    int n, d = 0, before, length = 2, ans = 2, first = 1, second = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        int now;
        scanf("%d", &now);
        if (first)
        {
            first = 0;
        }
        else if (second)
        {
            second = 0;
            d = now - before;
        }
        else
        {
            if ((now - before) == d)
            {
                length++;
            }
            else
            {
                ans = ans > length ? ans : length;
                length = 2;
                d = now - before;
            }
        }
        before = now;

        n--;
    }
    printf("%d", ans);
    return 0;
}
