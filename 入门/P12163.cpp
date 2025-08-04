#include <stdio.h>

int main()
{
    int count2, count0, count5, ans = 0;
    for (int i = 1; i <= 20250412; i++)
    {
        count2 = count0 = count5 = 0;
        for (int j = i; j >= 1; j /= 10)
        {
            if (j%10 == 2)
                count2++;
            else if (j%10 == 0)
                count0++;
            else if (j%10 == 5)
                count5++;
            if (count2 >= 2 && count0 >= 1 && count5 >= 1)
            {
                ans++;
                break;
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}