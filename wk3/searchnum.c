#include <stdio.h>
#include <stdlib.h>

int Duplicate(int *list,int numArgs)
{
	unsigned int counti = 0;
	// loop through each item in list and loop through those to check for repeats
	for (unsigned int i = 0; i < numArgs; ++i){
		counti = 0;
		for (unsigned int j = 0; j < numArgs; ++j){
			if (list[i] == list[j]){
				counti += 1;
				if (counti > 1){
					printf("%d\n", list[i]);
					return 0;
				}
			}
		}
	}
	printf("no duplicated number\n");
	return 0;
}

int main(int argc, char *argv[])
{
	int length = argc - 1;
	int arr[length];
	for (unsigned int i = 0; i < length; ++i){
		arr[i] = atoi(argv[i + 1]);
	}
	Duplicate(arr, length);
}
