#include <stdio.h>
#include <string.h>

long long seq[10000003];

int main()
{
    memset(seq, 0, sizeof(seq));
    int n, m, x, y;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &seq[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d%d", &x, &y);
        seq[x - 1] -= y;
    }

    for (int i = 0; i < n; i++)
        printf("%lld ", seq[i]);
    printf("\n");
    return 0;
}