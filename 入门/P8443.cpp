#include <stdio.h>

int main()
{
    int T;
    long long l, r, x;
    scanf("%d", &T);
    while (scanf("%lld%lld%lld", &l, &r, &x) == 3)
    {
        if (l / x == r / x)
            printf("%lld\n", l / x);
        else
            printf("%d\n", 1);
    }

    return 0;
}