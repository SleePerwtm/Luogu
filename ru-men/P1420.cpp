#include <stdio.h>

int main()
{
    int n, ai, ans = 0, before, len = 1;
    scanf("%d", &n);
    while (scanf("%d", &ai) == 1)
    {
        if (ai == before + 1)
            len++;
        else
            len = 1;
        if (len > ans)
            ans = len;
        before = ai;
    }
    printf("%d\n", ans);
    return 0;
}