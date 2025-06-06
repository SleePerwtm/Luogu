#include <stdio.h>

char in[8];

void ten_to_two(int n, char *binary)
{
    for (int i = 7; i >= 0; i--)
    {
        binary[i] = n % 2;
        n >>= 1;
    }
}

int ans(char flag, int num)
{
    return flag * 128 + num;
}

int main()
{
    int n, before, counter = 0;
    char flag;
    scanf("%d", &n);
    for (int i = 0; i < (n / 8); i++)
    {
        scanf("%d", &before);
        ten_to_two(before, in);
        if (i == 0)
            flag = in[i];
        for (int j = 0; j < 8; j++)
        {
            if (in[j] == flag)
                counter++;
            else
            {
                printf("%d ", ans(flag, counter));
                flag = in[j];
                counter = 1;
            }
        }
    }
    printf("%d", ans(flag, counter));
    return 0;
}