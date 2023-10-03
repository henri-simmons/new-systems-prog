#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double rad, height, ans;
    double PI = 3.1415;
    if (argc == 3)
    {
        rad = atof(argv[1]);
        height = atof(argv[2]);
        if (rad < 0 || height < 0)
        {
            printf("The radious or height cannot be negative!\n");
            return 1;
        }
        ans = (2 * PI * rad * height) + (2 * PI * rad * rad);
        printf("%.2f\n", ans);
        return 0;
    }
    else if (argc == 1)
    {
        printf("No input given!\n");
        return 1;
    }
    else
    {
        printf("Two arguments needed!\n");
        return 1;
    }
}