
#include <stdio.h>

int main() {
    
    int a,b,sum,sub,mul,quo,rem;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    printf("The value of a =%d \nThe value of b =%d ",a,b);
    if (a>b){
        printf("\n%d is greater than %d",a,b);
    }
    if (a>b){
        printf("\n%d is lesser than %d",b,a);
    } if (a==b){
        printf("\n%d is equal to  %d",a,b);
    } if (a!=b){
        printf("\n%d is not equal to %d",a,b);
    }
    return 0;
}