#include<stdio.h>
int main()
{
int kilo,meter,centi,milli;
printf("please enter the distance in kilometer:");
scanf("%d",&kilo);
meter=kilo*1000;
centi=kilo*100000;
milli=kilo*10000000;
printf("the distance in meter is %d",meter);
printf("the distance in centimeter is %d",centi);
printf("the distance in millimeter is %d",milli);
}