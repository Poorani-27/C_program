#include <stdio.h>

int main() {
    int i;

    // For loop from 1 to 5
    for (i = 1; i <= 5; i++) {
        // Check if i is even or odd
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 0;
}
