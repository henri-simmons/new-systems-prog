#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum element in an array
int findMax(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char *argv[])
{

    // Calculate the number of integer arguments
    int numArgs = argc - 1;

    // Allocate memory for an integer array to store the input values
    int *arr = (int *)malloc(numArgs * sizeof(int));

    // Convert command-line arguments to integers and store them in the array
    for (int i = 1; i <= numArgs; i++)
    {
        arr[i - 1] = atoi(argv[i]);
    }

    // Find the maximum element in the array
    int max = findMax(arr, numArgs);

    // Print the maximum element
    printf("%d\n", max);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}