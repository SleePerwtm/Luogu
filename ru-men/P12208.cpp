#include <stdio.h>
#include <string.h>

const int maxn = 150;
int sum[maxn]; // 储存对应某一字符的总数

int main()
{
    char c;
    int flag = 1;
    memset(sum, 0, sizeof(sum));
    while ((c = getchar()) != EOF && c != '\n')
    {
        sum[c]++;
    }
    for (int i = 0; i <= 127; i++)
    {
        if (sum[i] % 2 == 1)
            flag = 0;
    }
    printf("%s", flag ? "YES" : "NO");

    return 0;
}