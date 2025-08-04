#include <stdio.h>

int a[1005];

int main()
{
    int n, k, zushu;
    scanf("%d%d", &n, &k);
    zushu = n / k;
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int m = 0; m < k; m++)
    {
        int flag = 0;
        for (int i = 0; i < zushu; i++)
        {
            int num;
            scanf("%d", &num);
            for (int j = 0; j < k; j++)
            {
                if (num == a[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (!flag)
        {
            printf("\\QAQ/");
            return 0;
        }
    }
    printf("\"MiaoW\"");

    return 0;
}
