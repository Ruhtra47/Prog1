#include <stdio.h>

int main()
{
  int i = 0, den = 2, primo = 0, qtd = 0, cont = 0;

  scanf("%d", &qtd);

  for (i = 2; i <= qtd; i++)
  {
    den = 1;
    cont = 0;
    while (den <= i)
    {
      if (i % den == 0)
      {
        cont++;
      }
      den++;
    }
    if (cont == 2)
      printf("%d ", i);
  }

  return 0;
}