#include <stdio.h>
#include <string.h>
int main (){
    char name[20]="kavi";
    char msg[]=" hello world ";
     printf("\n%d",strlen(name));
    strcat(name,msg);
    printf("\n%s",name);
    printf("\n%d",strlen(name));
    return 0;
}