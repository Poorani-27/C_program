#include <stdio.h>

// Function prototype
int add(int a, int b);
void greet(char name[]){
    printf("hello %s",name);
}

int main() {
    int result;
    char myname[] = "kavi";
    result = add(5, 3);
    

    printf("sum: %d\n", result);
    greet(myname);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
