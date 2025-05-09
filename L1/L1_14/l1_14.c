#include <stdio.h>

int main()
{
    int rect_begin_x, rect_begin_y, rect_end_x, rect_end_y, point_x, point_y;
    scanf("%d %d %d %d %d %d", &rect_begin_x, &rect_begin_y, &rect_end_x, &rect_end_y, &point_x, &point_y);

    int x_min = (rect_begin_x < rect_end_x) ? rect_begin_x : rect_end_x;
    int x_max = (rect_begin_x > rect_end_x) ? rect_begin_x : rect_end_x;
    int y_min = (rect_begin_y < rect_end_y) ? rect_begin_y : rect_end_y;
    int y_max = (rect_begin_y > rect_end_y) ? rect_begin_y : rect_end_y;

    if (point_x >= x_min && point_x <= x_max && point_y >= y_min && point_y <= y_max)
        printf("Dentro");
    else
        printf("Fora");
}