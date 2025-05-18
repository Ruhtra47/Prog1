#include <stdio.h>

void sort(int *nota1, int *nota2, int *nota3)
{
    int temp_nota1 = *nota1;
    int temp_nota2 = *nota2;
    int temp_nota3 = *nota3;
    while (temp_nota1 < temp_nota2 || temp_nota2 < temp_nota3 || temp_nota1 < temp_nota3)
    {
        if (temp_nota1 < temp_nota2)
        {
            temp_nota1 = temp_nota1 ^ temp_nota2;
            temp_nota2 = temp_nota2 ^ temp_nota1;
            temp_nota1 = temp_nota2 ^ temp_nota1;
        }

        if (temp_nota2 < temp_nota3)
        {
            temp_nota2 = temp_nota2 ^ temp_nota3;
            temp_nota3 = temp_nota3 ^ temp_nota2;
            temp_nota2 = temp_nota3 ^ temp_nota2;
        }

        if (temp_nota1 < temp_nota3)
        {
            temp_nota1 = temp_nota1 ^ temp_nota3;
            temp_nota3 = temp_nota3 ^ temp_nota1;
            temp_nota1 = temp_nota3 ^ temp_nota1;
        }
    }

    *nota1 = temp_nota1;
    *nota2 = temp_nota2;
    *nota3 = temp_nota3;
}

int main()
{
    int n;
    scanf("%d", &n);

    int delegacao;
    int del_camp_masc, del_camp_fem;
    int nota_del_camp_masc = 0, nota_del_camp_fem = 0;
    for (delegacao = 0; delegacao < n; delegacao++)
    {
        int i;
        int nota1, nota2, nota3;
        int nota1_masc, nota2_masc, nota3_masc;
        int nota1_fem, nota2_fem, nota3_fem;
        int max_nota1_masc = -1, max_nota2_masc = -1, max_nota3_masc = -1;
        int max_nota1_fem = -1, max_nota2_fem = -1, max_nota3_fem = -1;
        int min_nota1_masc = 11, min_nota2_masc = 11, min_nota3_masc = 11;
        int min_nota1_fem = 11, min_nota2_fem = 11, min_nota3_fem = 11;
        int id_masc_max = -1, id_fem_max = -1;
        int id_masc_min = -1, id_fem_min = -1;
        int nota_masc_total = 0, nota_fem_total = 0;
        char sexo;
        while (1)
        {
            scanf("%d ", &i);
            if (i == -1)
                break;

            scanf("%c %d %d %d", &sexo, &nota1, &nota2, &nota3);
            sort(&nota1, &nota2, &nota3);

            if (sexo == 'M')
            {
                nota_masc_total += nota1;
                nota1_masc = nota1;
                nota2_masc = nota2;
                nota3_masc = nota3;

                if (nota1_masc <= min_nota1_masc && nota2_masc <= min_nota2_masc)
                {
                    min_nota1_masc = nota1_masc;
                    min_nota2_masc = nota2_masc;
                    min_nota3_masc = nota3_masc;
                    id_masc_min = i;
                }
                else if (nota1_masc == min_nota1_masc)
                {
                    if (nota2_masc == min_nota2_masc)
                    {
                        if (nota3_masc <= min_nota3_masc)
                        {
                            min_nota1_masc = nota1_masc;
                            min_nota2_masc = nota2_masc;
                            min_nota3_masc = nota3_masc;
                            id_masc_min = i;
                        }
                    }
                    else if (nota2_masc <= min_nota2_masc)
                    {
                        min_nota1_masc = nota1_masc;
                        min_nota2_masc = nota2_masc;
                        min_nota3_masc = nota3_masc;
                        id_masc_min = i;
                    }
                }

                if (nota1_masc > max_nota1_masc)
                {
                    max_nota1_masc = nota1_masc;
                    max_nota2_masc = nota2_masc;
                    max_nota3_masc = nota3_masc;
                    id_masc_max = i;
                }
                else if (nota1_masc == max_nota1_masc)
                {
                    if (nota2_masc == max_nota2_masc)
                    {
                        if (nota3_masc > max_nota3_masc)
                        {
                            max_nota1_masc = nota1_masc;
                            max_nota2_masc = nota2_masc;
                            max_nota3_masc = nota3_masc;
                            id_masc_max = i;
                        }
                    }
                    else if (nota2_masc > max_nota2_masc)
                    {
                        max_nota1_masc = nota1_masc;
                        max_nota2_masc = nota2_masc;
                        max_nota3_masc = nota3_masc;
                        id_masc_max = i;
                    }
                }
            }
            else if (sexo == 'F')
            {
                nota_fem_total += nota1;
                nota1_fem = nota1;
                nota2_fem = nota2;
                nota3_fem = nota3;

                if (nota1_fem <= min_nota1_fem && nota2_fem <= min_nota2_fem)
                {
                    min_nota1_fem = nota1_fem;
                    min_nota2_fem = nota2_fem;
                    min_nota3_fem = nota3_fem;
                    id_fem_min = i;
                }
                else if (nota1_fem == min_nota1_fem)
                {
                    if (nota2_fem == min_nota2_fem)
                    {
                        if (nota3_fem <= min_nota3_fem)
                        {
                            min_nota1_fem = nota1_fem;
                            min_nota2_fem = nota2_fem;
                            min_nota3_fem = nota3_fem;
                            id_fem_min = i;
                        }
                    }
                    else if (nota2_fem <= min_nota2_fem)
                    {
                        min_nota1_fem = nota1_fem;
                        min_nota2_fem = nota2_fem;
                        min_nota3_fem = nota3_fem;
                        id_fem_min = i;
                    }
                }

                if (nota1_fem > max_nota1_fem)
                {
                    max_nota1_fem = nota1_fem;
                    max_nota2_fem = nota2_fem;
                    max_nota3_fem = nota3_fem;
                    id_fem_max = i;
                }
                else if (nota1_fem == max_nota1_fem)
                {
                    if (nota2_fem == max_nota2_fem)
                    {
                        if (nota3_fem > max_nota3_fem)
                        {
                            max_nota1_fem = nota1_fem;
                            max_nota2_fem = nota2_fem;
                            max_nota3_fem = nota3_fem;
                            id_fem_max = i;
                        }
                    }
                    else if (nota2_fem > max_nota2_fem)
                    {
                        max_nota1_fem = nota1_fem;
                        max_nota2_fem = nota2_fem;
                        max_nota3_fem = nota3_fem;
                        id_fem_max = i;
                    }
                }
            }
        }

        if (nota_masc_total > nota_del_camp_masc)
        {
            del_camp_masc = delegacao + 1;
            nota_del_camp_masc = nota_masc_total;
        }

        if (nota_fem_total > nota_del_camp_fem)
        {
            del_camp_fem = delegacao + 1;
            nota_del_camp_fem = nota_fem_total;
        }

        printf("MELHORES ATLETAS DA DELEGACAO %d\n", delegacao + 1);
        printf("MASCULINO: %d FEMININO: %d\n", id_masc_max, id_fem_max);
        printf("PIORES ATLETAS DA DELEGACAO %d\n", delegacao + 1);
        printf("MASCULINO: %d FEMININO: %d\n", id_masc_min, id_fem_min);
        printf("\n");
    }

    printf("DELEGACAO CAMPEA:\n");
    printf("MASCULINO: %d FEMININO: %d", del_camp_masc, del_camp_fem);
}