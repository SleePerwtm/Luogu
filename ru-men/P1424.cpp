#include <stdio.h>

int main()
{
    int x, n, ans, Sat, Sun;
    scanf("%d%d", &x, &n);
    Sun = (x + n - 1) / 7 - (x - 1) / 7; // 结束日之前包含的周天数减去开始日之前包含的周天数
    Sat = (x + n) / 7 - x / 7; // 前、后项都加一，求周天的数量，等价于求原问题周六的数量
    ans = (n - Sat - Sun) * 250;
    printf("%d", ans);
    return 0;
}