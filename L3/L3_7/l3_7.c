#include <stdio.h> 

int area(int x1, int x2, int y1, int y2)
{
    return ((x2 - x1) * (y2 - y1));
}

int area_total(int r1_x1, int r1_x2, int r1_y1, int r1_y2, int r2_x1, int r2_x2, int r2_y1, int r2_y2)
{
    int area_r1 = area(r1_x1, r1_x2, r1_y1, r1_y2);
    int area_r2 = area(r2_x1, r2_x2, r2_y1, r2_y2);

    int dist_x_remover = 0;
    int dist_y_remover = 0;

    if (r2_x1 >= r1_x1 && r2_x1 <= r1_x2)
    {
        if (r2_x2 >= r1_x1 && r2_x2 <= r1_x2)
        {
            dist_x_remover = r2_x2 - r2_x1;
        }
        else
        {
            if (r2_x2 > r1_x2)
            {
                dist_x_remover = r1_x2 - r2_x1;
            }
        }
    }
    else
    {
        if (r2_x2 >= r1_x1 && r2_x2 <= r1_x2)
        {
            dist_x_remover = r2_x2 - r1_x1;
        }

        if (r2_x1 <= r1_x1 && r2_x2 >= r1_x2)
        {
            dist_x_remover = r1_x2 - r1_x1;
        }
    }
    
    if (r2_y1 >= r1_y1 && r2_y1 <= r1_y2)
    {
        if (r2_y2 >= r1_y1 && r2_y2 <= r1_y2)
        {
            dist_y_remover = r2_y2 - r2_y1;
        }
        else
        {
            if (r2_y2 > r1_y2)
            {
                dist_y_remover = r1_y2 - r2_y1;
            }
        }
    }
    else
    {
        if (r2_y2 >= r1_y1 && r2_y2 <= r1_y2)
        {
            dist_y_remover = r2_y2 - r1_y1;
        }

        if (r2_y1 <= r1_y1 && r2_y2 >= r1_y2)
        {
            dist_y_remover = r1_y2 - r1_y1;
        }
    }
    return area_r1 + area_r2 - (dist_x_remover * dist_y_remover);
}

int main()
{
    int r1_x1, r1_x2, r1_y1, r1_y2, r2_x1, r2_x2, r2_y1, r2_y2;
    scanf("%d %d %d %d %d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2, &r2_x1, &r2_y1, &r2_x2, &r2_y2);

    printf("RESP:%d", area_total(r1_x1, r1_x2, r1_y1, r1_y2, r2_x1, r2_x2, r2_y1, r2_y2));
}