#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float sumem(float n1, float n2);
float divem(float n1, float n2);

int main(int argc, char *argv[])
{
    /*initialise variables*/
    char *operations = argv[1];
    float num1, num2;
    num1 = atof(argv[2]);
    num2 = atof(argv[3]);
    /*run functions based on first input*/
    if (strcmp(operations, "multiply") == 0)
    {
        printf("%f\n", sumem(num1, num2));
    }
    else if (strcmp(operations, "divide") == 0)
    {
        if (num2 == 0)
        {
            printf("invalid\n");
            return 0;
        }
        else
        {
            printf("%f\n", divem(num1, num2));
        }
    }
    return 0;
}

float sumem(float n1, float n2)
{
    float answer = n1 * n2;
    return answer;
}

float divem(float n1, float n2)
{
    float answer = n1 / n2;
    return answer;
}