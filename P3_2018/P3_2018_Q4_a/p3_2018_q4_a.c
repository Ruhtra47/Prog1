#include <stdio.h>
#include <string.h>

int main()
{
    int max_len = 0;
    char s1[1000], s2[1000], max[1000];
    while (scanf("%s %s", s1, s2) == 2)
    {
        int l1 = strlen(s1);
        int l2 = strlen(s2);

        if (l1 > l2)
        {
            printf("%s\n", s1);
            if (l1 > max_len)
            {
                max_len = l1;
                strcpy(max, s1);
            }
        }
        else if (l2 > l1)
        {
            printf("%s\n", s2);
            if (l2 > max_len)
            {
                max_len = l2;
                strcpy(max, s2);
            }
        }
    }

    printf("MAX:");

    if (max_len == 0)
        printf("--");
    else
        printf("%s", max);

    printf("\n");

    return 0;
}