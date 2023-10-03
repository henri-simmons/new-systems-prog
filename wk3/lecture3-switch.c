#include <stdio.h>
#include <stdlib.h>


int main(int argc, char*argv[]){
    
    int countryCode;
    countryCode = atoi(argv[1]);

    switch(countryCode){
        case 353:
            printf("Ireland\n");
            break;
        case 44:
            printf("United Kingdom\n");
            break;
        default:
            printf("Undefined\n");
            break;
    }
}