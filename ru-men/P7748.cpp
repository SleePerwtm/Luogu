#include <stdio.h>

int main()
{
    int remain = 210;
    int K, N, T;
    char char_;
    scanf("%d%d", &K, &N);
    while (N > 0)
    {
        scanf("%d %c", &T, &char_);

        remain -= T;
        if (remain < 0) // 到达爆炸时间
        {
            printf("%d", K); // 输出当前拿箱人编号
            return 0;
        }
        if (char_ == 'T') // 答对时，传给左手的人
        {
            if (K == 8)
                K = 1;
            else
                K++;
        }

        N--;
    }
    return 0;
}