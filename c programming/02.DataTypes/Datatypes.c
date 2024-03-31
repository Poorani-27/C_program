//data types
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    //integer
    printf("Integer");
    printf("\nShort int  %u bytes %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX);
    printf("\nunsigned Short int  %u bytes 0 to %d",sizeof(unsigned short int),USHRT_MAX);
    printf("\nint  %u bytes %d to %d",sizeof(int),INT_MAX,INT_MIN);
    printf("\nunsigned int  %u bytes 0 to %d",sizeof(unsigned int),UINT_MAX);
    printf("\nlong int  %u bytes %d to %d",sizeof(long int),LONG_MAX,LONG_MIN);
    printf("\nunsigned long  int  %ldbytes 0 to %ld",sizeof(long),ULONG_MAX);
    printf("\nlong long int  %zu bytes %lld to %lld", sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("\nlong long int  %zu bytes %lld to %lld", sizeof(long long int),  ULLONG_MAX);
//character
    printf("\n\nCharacter");
    printf("\ncharacter %u bytes 0 to %d",sizeof(char),CHAR_MAX,CHAR_MIN);
    printf("\nunsigned character %u bytes 0 to %d",sizeof(unsigned char),UCHAR_MAX);
//float
    printf("\n\nFloat");
    printf("\nfloat %u bytes ",sizeof(float));
    printf("\nDouble %u bytes",sizeof(double));
    printf("\nlong double %u bytes",sizeof(long double));
    return 0;
}