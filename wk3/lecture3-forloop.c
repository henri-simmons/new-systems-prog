#include <stdio.h>
#include <stdlib.h>

/*
int main(int argc, char*argv[]){
    for(int i = 0; i<=10; i++){
        printf("%d\n", i);
    }
}
*/

int main(int argc, char *argv[])
{
    int width = atoi(argv[1]);
    int height = atoi(argv[2]);

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}