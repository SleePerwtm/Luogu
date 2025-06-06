#include <stdio.h>
#include <string.h>

char s[505];
int dp[505][505];

int main()
{
    int T;
    scanf("%d", &T);

    while (T > 0)
    {
        memset(dp, 0, sizeof(dp));
        memset(s, '\0', sizeof(s));
        scanf("%s", s);
        int len = strlen(s), ans = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            for (int j = i; j < len; j++)
            {
                if (i == j)
                    dp[i][j] = 1;
                else if (s[i] == s[j] || s[i] == '?' || s[j] == '?')
                {
                    if (i + 1 == j)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = dp[i + 1][j - 1];
                }
                if (dp[i][j])
                    ans++;
            }
        }
        printf("%d\n", ans);

        T--;
    }
    return 0;
}
