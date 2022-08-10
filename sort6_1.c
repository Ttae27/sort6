#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    sort6(char **str)
{
    char    *tmp;
    int     k,j;

    for (int i = 0;i < 6;i++)
    {
        tmp = str[i];
        j = i + 1;
        while (j < 6)
        {
            if (strcmp(tmp, str[j]) > 0)
            {
                tmp = str[j];
                str[j] = str[i];
            }
            j++;
        }
        str[i] = tmp;
    }
    k = 0;
    while (k < 6)
    {
        if (k < 5)
        {
            while (strcmp(str[k], str[k + 1]) == 0)
                k++;
        }
        printf("%s\n", str[k]);
        k++;
    }
}

int main()
{
    char    **str;

    str = (char **)malloc(sizeof(char *) * 6);
    for (int i = 0;i < 6;i++)
        str[i] = (char *)malloc(sizeof(char) * 100);
    for (int i = 0;i < 6;i++)
        scanf("%s", str[i]);
    sort6(str);
}