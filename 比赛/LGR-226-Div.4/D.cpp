#include <stdio.h>

int main()
{
    int k,n;
    char c;
    scanf("%d %c", &k, &c);
    n = 256 - k;
    printf("%lld", (long long)n * (n + 1) * (2 * n + 1) / 6);
    return 0;
}
