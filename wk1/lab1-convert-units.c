#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    float inch, cm;
    cm = atof(argv[1]);
    inch = cm / 2.54;
    printf("%.2f\n", inch);
}