#include <stdio.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int minx = x1 < x2 ? x1 : x2;
    int maxx = x1 > x2 ? x1 : x2;
    int miny = y1 < y2 ? y1 : y2;
    int maxy = y1 > y2 ? y1 : y2;

    printf("(%d,%d)(%d,%d)(%d,%d)(%d,%d)\n", minx, maxy, minx, miny, maxx, miny, maxx, maxy);
}