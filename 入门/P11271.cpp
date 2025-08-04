#include <stdio.h>

int main()
{
    int x, y, p, q, ans;

    scanf("%d%d%d%d", &x, &y, &p, &q);

    p = p < (x - p) ? p : x - p;
    q = q < (y - q) ? q : y - q;
    ans = p < q ? p : q;

    printf("%d\n", ans);

    return 0;
}