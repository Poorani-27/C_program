//Ramesh basic salary input through the keyboard .His dearness allowance is 40 percentage of the basic salary and house rent allowance is 20 percentage of the basic salary write the program to calculate is gross salary.
#include<stdio.h>
int main(){
    float salary ,allowance, rent ,total;
    printf("\nEnter salary :");
    scanf("%f", &salary);
    allowance = salary *0.4 ;
    rent = salary *0.2 ;
    total = allowance + rent + salary ;
    printf("\nBasic Salary : %0.2f", salary);
    printf("\nAllowance : %0.2f", allowance);
    printf("\nRent : %0.2f", rent);
    printf("\nTotal : %0.2f", total);

    return 0;
}