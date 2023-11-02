#include <stdlib.h>
#include <stdio.h>

/* good idea to start pointer variables with "p" so you can find them */
int main(int argc, char *argv[])
{
    int number = 15;        /* we declare a varaible stored an integer value 15 */
    int *pointer = &number; /*we use a `pointer` to point to the address of `number` */
    printf("%d\n", *pointer);
}