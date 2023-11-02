#include <stdio.h>

void doubleX(int *number);

int main(int argc, char *argv[])
{
    int number = 12;
    doubleX(&number);
    printf("%d\n", number);
}

void doubleX(int *number)
{
    *number = *number * 2;
}