#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T > 0)
    {
        long long l, r, ans = 0;
        scanf("%lld%lld", &l, &r);
        ans = (r + 1) / 2 - l / 2;
        printf("%lld\n", ans);

        T--;
    }
}