// the mark obtained by a student in five different subjects are input through keyword find out the average and percentage of mark of obtained by a student assume that the maximum mark that can be obtained by a student is 100
#include<stdio.h>

int main(){


int m1,m2,m3,m4,m5,total;
float avg,percentage;
 printf("Enter the marks obtained by the student\n");
 scanf("\n%d%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
percentage=avg *100;
printf("\ntotal %d",total);
printf("\navg %f",avg);
printf("\npercentage %f",percentage);



    return 0;
}