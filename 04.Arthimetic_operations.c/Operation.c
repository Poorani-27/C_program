#include<stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter two Numbers: ");
    scanf("%d %d", &a, &b);  // Corrected the scanf statement
    
    c = a + b;
    
    printf("Total: %d\n", c);  // Corrected the printf statement

    return 0;
}
