// The distance between two cities in kilometer is input through the keyboard right a program to convert and print the distance in meters feet inches and centimeters
#include<stdio.h>
int main(){

float a,m,f,i,cm;
printf("\nEnter the distance between two cities in kilometer : ");
scanf("%f",&a);
m = a *1000;
i = a*0.0254;
cm = a*100000;

printf("\nmeter : %0.2f ,\ncenti-meter : %0.2f , \ninch : %0.2f",m,cm,i);

    return 0;
}