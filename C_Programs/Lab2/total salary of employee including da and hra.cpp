#include<stdio.h>
int main()
{
int basic;
float daily,hra,total_salary;
printf("please enter the basic salary :");
scanf("%d",&basic);
daily=basic*0.16;
hra=basic*0.44;
total_salary=basic+daily+hra;
printf("the total salary is %f",total_salary);

}
