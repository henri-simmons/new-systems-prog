#include <stdio.h>

int main(int argc, char*argv[])
{
    int age = 19;
    long studentId = 22422504;
    float height = 1.83f;
    char initial = 'H';
    char first_name[] = "Henri";
    char last_name[] = "Simmons";

    printf("Hello, I am %d years old\n", age);
    printf("Height: %f\n", height);
    printf("My first name is: %s\n", first_name);
    printf("my full name is %s %s\n", first_name, last_name);

    float monthlySalary;
    monthlySalary = 5305.54;
    double annualSalary;
    annualSalary = monthlySalary*12;

    printf("my monthly salary is %f\n", monthlySalary);
    printf("my annual salary is %f euros\n", annualSalary);

    return 0;
}