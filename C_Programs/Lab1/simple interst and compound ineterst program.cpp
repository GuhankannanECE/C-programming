#include<stdio.h>
#include<math.h>
int main()
{
int p,r,t,si,ci;
printf("please enter principle amount,rate of interest,time period");
scanf("%d %d %d",&p,&r,&t);
si=p*r*t/100;
ci=p*pow((1+r/100),t);
printf("simple interest:%d",si);
printf("compound ineterst:%d",ci);
}
