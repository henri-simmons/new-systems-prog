#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int array[argc - 1];
    int num = 0;
    for (int i = 0; i < argc - 1; ++i)
    {
        array[i] = atoi(argv[i + 1]);
    }
    for (int i = 0; i < argc - 1; ++i)
    {
        if (array[i] % 2 == 1)
        {
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}