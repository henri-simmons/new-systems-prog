#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);
}