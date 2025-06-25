#include <stdio.h>

int main()
{
    int h1, m1, s1, h2, m2, s2;
    scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

    if (h1 == h2 && m1 == m2 && s1 == s2)
    {
        printf("IGUAIS");
        return 0;
    }

    int maior_hora, maior_min, maior_seg;
    if (h1 > h2)
    {
        maior_hora = h1;
        maior_min = m1;
        maior_seg = s1;
    }
    else if (h2 > h1)
    {
        maior_hora = h2;
        maior_min = m2;
        maior_seg = s2;
    }
    else
    {
        if (m1 > m2)
        {
            maior_hora = h1;
            maior_min = m1;
            maior_seg = s1;
        }
        else if (m2 > m1)
        {
            maior_hora = h2;
            maior_min = m2;
            maior_seg = s2;
        }
        else
        {
            if (s1 > s2)
            {
                maior_hora = h1;
                maior_min = m1;
                maior_seg = s1;
            }
            else
            {
                maior_hora = h2;
                maior_min = m2;
                maior_seg = s2;
            }
        }
    }

    int res = ((maior_hora + maior_min + maior_seg) / 10) % 10;
    printf("RESP:%d", res);
}