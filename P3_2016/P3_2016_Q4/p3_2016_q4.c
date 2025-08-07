#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);

    while (c--)
    {
        int n;
        scanf("%d", &n);

        int l[n];

        int i;
        for (i = 0; i < n; i++)
            scanf("%d", &l[i]);

        int j;
        for (i = 0; i < n; i++)
        {
            int ref = l[i];
            int ans = 0;

            for (j = 0; j < n; j++)
            {
                if (i == j)
                    continue;

                if (l[j] > l[i])
                    ans++;
            }

            printf("%d ", ans);
        }

        printf("\n");
    }
}