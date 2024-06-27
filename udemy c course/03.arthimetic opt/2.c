
#include <stdio.h>

int main() {
    
    int a,b,sum,sub,mul,quo,rem;
    printf("Enter  two numbers :\n");
    scanf("%d%d",&a,&b);
    printf("The value of a =%d \nThe value of b =%d ",a,b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    quo= a/b;
    rem=a%b;
    printf("\nAddition %d + %d = %d",a,b,sum);
    printf("\nSubtraction %d - %d = %d",a,b,sub);
    printf("\nMultiplication %d * %d = %d",a,b,mul);
    printf("\nDivision %d / %d = %d",a,b,quo);
    printf("\nRemainder %d %% %d = %d",a,b,rem);
    return 0;
}
