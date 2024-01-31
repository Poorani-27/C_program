#include<stdio.h>

int main() {
    int a, b, c;
    
    printf("\nEnter two Numbers: \n");
    scanf("%d %d", &a, &b); 
    c = a + b;
    printf("add : %d\n", c); 
     c = a - b;
    printf("sub : %d\n", c); 
     c =a *b;
    printf("Mul : %d\n", c); 
    float result = (float)a / (float)b;
    printf("Division: %f", result);
    c=a%b;
    printf("\nMod : %d",c);
    return 0;
}
