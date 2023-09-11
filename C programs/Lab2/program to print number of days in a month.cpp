#include<stdio.h>
#include<stdio.h>
int main()
{
int year,month;
printf("please enter the year and month:");
scanf("%d %d",&year,&month);
if(month==1)
	printf("number of days is 31.");
if(month==3)
	printf("number of days is 31.");
if(month==4)
	printf("number of days is 30.");
if(month==5)
	printf("number of days is 31.");
if(month==6)
	printf("number of days is 30.");
if(month==7)
	printf("number of days is 31.");
if(month==8)
	printf("number of days is 31.");
if(month==9)
	printf("number of days is 30.");
if(month==10)
	printf("number of days is 31.");
if(month==11)
	printf("number of days is 30.");
if(month==12)
	printf("number of days is 31.");
if(year%4==0 && (year%100!=0||year%400==0))
	if(month==2)
	printf("number of days is 29.");
	
else
	if(month==2)
	printf("number of days is 28.");
}
