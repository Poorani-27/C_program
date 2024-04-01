#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamic_array = malloc(5 * sizeof(int)); // Allocate memory for an integer array of size 5
    if (dynamic_array == NULL) { // Check if memory allocation failed
        printf("Memory allocation failed.\n");
        return 1; // Exit the program indicating failure
    }

    // Populate the array
    for (int i = 0; i < 5; i++) {
        dynamic_array[i] = i * 10;
    }

    // Print the array
    for (int i = 0; i < 5; i++) {
        printf("dynamic_array[%d] = %d\n", i, dynamic_array[i]);
    }

    free(dynamic_array); // Free the allocated memory
    return 0; // Exit the program successfully
}
