#include <stdio.h>

int main(int argc, char *argv[])
{
    int inputArray[3] = {1, 2, 3};
    int *pFirstElement = &inputArray[0];
    /* using a pointer the ith element of an array using *(p+i) */
    printf("The address of the first element is: %p\n", pFirstElement);
    printf("The value of the first element is %d\n", *pFirstElement);

    printf("The address of the second element is: %p\n", pFirstElement + 1);
    printf("The value of the second element is %d\n", *(pFirstElement + 1));

    printf("The address of the third element is: %p\n", pFirstElement + 2);
    printf("The value of the third element is %d\n", *(pFirstElement + 2));
}