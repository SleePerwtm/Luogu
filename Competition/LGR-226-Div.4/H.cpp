#include <stdio.h>
#include <string.h>

char json[10002];
char key[12];
char key_compare[12];

int main()
{
    memset(json, '\0', sizeof(json));
    scanf("%s", json);

    int p, key_start = 0, value_start = 0;
    scanf("%d", &p);
    while (p > 0)
    {
        memset(key, '\0', sizeof(key));
        memset(key_compare, '\0', sizeof(key_compare));
        int is_begin = 0, level = 0;
        scanf("%s", key);
        for (long long i = value_start; i < strlen(json); i++)
        {
            if (json[i] == '{')
                level++;
            else if (json[i] == '}')
                level--;

            if (json[i] == '\"' && level == 1)
            {
                is_begin = !is_begin;
                if (is_begin)
                    key_start = i + 1;
            }

            if (is_begin)
            {
                key_compare[i - key_start] = json[i];
            }
            else
            {
                if (strcmp(key, key_compare) == 0)
                {
                    value_start = i + 2;
                    break;
                }
            }
        }

        p--;
    }

    for (int i = value_start;; i++)
    {
        if (json[i] == ',' || json[i] == '}')
            break;
        printf("%c", json[i]);
    }
    printf("\n");

    return 0;
}
