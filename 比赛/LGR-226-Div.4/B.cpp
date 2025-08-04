#include <stdio.h>

int main()
{
    int w, f, a, r, flag = 1;
    scanf("%d%d%d%d", &w, &f, &a, &r);
    if (w < r || (double)f / w > 0.2 || (double)a / w > 0.3)
        flag = 0;
    if (flag)
        printf("Accepted");
    else
        printf("Rejected");
    return 0;
}