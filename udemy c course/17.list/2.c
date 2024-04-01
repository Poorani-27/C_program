#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Loop to print array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
