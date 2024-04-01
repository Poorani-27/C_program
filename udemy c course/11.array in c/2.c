#include <stdio.h>
int main (){
    float marks[]={12.3,22.4,22,44.33,55.22} ;
    float total= 0;
    for(int i=1;i<=5;i++){
    printf("%f\n",marks[i]);
    total += marks[i];
    }
    total = total / sizeof(marks);
    printf("%d\n",sizeof(marks));
    printf("total = %f",total);
    return 0;
}