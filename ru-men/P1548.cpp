#include <stdio.h>

int main()
{
    int N, M, square = 0, rectangle = 0;
    scanf("%d%d", &N, &M);
    for (int n = 1; n <= N; n++)
        for (int m = 1; m <= M; m++)
        {
            if (m == n)
                square += (N - n + 1) * (M - m + 1);
            else
                rectangle += (N - n + 1) * (M - m + 1);
        }
    printf("%d %d", square, rectangle);

    return 0;
}