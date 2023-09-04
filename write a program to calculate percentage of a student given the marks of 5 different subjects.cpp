/*write a program to calculate percentage of a student given the marks of 5 different subjects*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,avg;
printf("please enter the marks in subject1:");
scanf("%d",&a);
printf("please enter the marks in subject2:");
scanf("%d",&b);
printf("please enter the marks in subject3");
scanf("%d",&c);
printf("please enter the marks in subjec4:");
scanf("%d",&d);
printf("please enter the marks in subjec5:");
scanf("%d",&e);
avg=(a+b+c+d+e)/5;
printf("The percentage of the student is %d",avg);
}
