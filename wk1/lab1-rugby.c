#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    int try, conversion, penalty, drop_goal, total;
    try = atoi(argv[1]) * 5;
    conversion = atoi(argv[2]) * 2;
    penalty = atoi(argv[3]) * 3;
    drop_goal = atoi(argv[4]) * 3;
    total = try + conversion + penalty + drop_goal;
    printf("%d\n", total);
}