#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    long long n;
    int k;
    while (T--)
    {
        long long a1 = 1, d = 1;
        scanf("%lld%d", &n, &k);
        while (k--)
        {
            int num;
            scanf("%d", &num);
            if (num == 1)
            {
                a1 += d;
                d *= 2;
            }
            else if (num == 2)
            {
                d *= 2;
            }
        }
        printf("%lld\n", a1);
    }
    return 0;
}