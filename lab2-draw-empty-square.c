#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int len;
    len = atoi(argv[1]);
    // top
    for (int i = 0; i < len; ++i)
    {
        printf("*");
    }
    printf("\n");
    // middle
    for (int i = 0; i < len - 2; ++i)
    {
        printf("*");
        for (int i = 0; i < len - 2; ++i)
        {
            printf(" ");
        }
        printf("*\n");
    }
    // bottom
    for (int i = 0; i < len; ++i)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}