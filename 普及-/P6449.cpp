#include <stdio.h>
#include <string.h>

const char *s[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
char day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int d, m, sum = 0;
    scanf("%d%d", &d, &m);
    for (int i = 0; i < m - 1; i++)
    {
        sum += day[i];
    }
    sum += d;
    printf("%s", s[sum % 7]);
    return 0;
}