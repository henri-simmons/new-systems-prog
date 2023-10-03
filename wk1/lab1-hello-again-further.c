/*
Program: lab1-hello_again.c
Author: Your Name
Input: A full name
Output: Print out the given name
*/

/* includes */
#include <stdio.h>
/* a header file with a function we might need */

int main(int argc, char*argv[])
{

    char name[100];
    scanf("%s", name);
    printf("Hello \n%s\n",name);
    return(0);
}