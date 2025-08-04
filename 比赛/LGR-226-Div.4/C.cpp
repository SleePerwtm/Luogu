#include <stdio.h>

int main()
{
    long long n;
    int first = 1;
    scanf("%lld", &n);
    while (n > 0)
    {
        if (first)
        {
            first = 0;
            printf("%lld", n % 100);
        }
        else
            printf("%02lld", n % 100);
        n /= 100;
    }
    return 0;
}
