#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversedString(char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(int argc, char *argv[])
{
    char *sentence = argv[1];
    reversedString(sentence);
    printf("%s\n", sentence);
    return 0;
}