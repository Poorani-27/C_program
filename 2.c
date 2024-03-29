#include <stdio.h>

char* getstring(){
    char*str="nice test";
    return str;
}
int main(){
    printf("%s",getstring());
    return 0;
}