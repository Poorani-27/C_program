#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int result;
    result = add(5, 3);
    printf("sum: %d", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
