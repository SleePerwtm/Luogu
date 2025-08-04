#include <stdio.h>
#include <string.h>

char note[105];

int main()
{
    int a = 0, c = 0, first = 1;
    scanf("%s", note);
    for (size_t i = 0; i < strlen(note); i++)
    {
        if (first)
        {
            first = 0;
            if (note[i] == 'A' || note[i] == 'D' || note[i] == 'E')
                a++;
            else if (note[i] == 'C' || note[i] == 'F' || note[i] == 'G')
                c++;
        }
        if (note[i] == '|')
            first = 1;
    }
    if (a > c)
        printf("A-mol\n");
    else if (a < c)
        printf("C-dur\n");
    else
    {
        if (note[strlen(note) - 1] == 'A')
            printf("A-mol\n");
        else
            printf("C-dur\n");
    }
    return 0;
}