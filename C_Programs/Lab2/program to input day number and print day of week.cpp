#include<stdio.h>
int main()
{
int day_num;
printf("please enter the day numberof the week");
scanf("%d",&day_num);
if(day_num==1)
	printf("the given day is monday");
else if(day_num==2)
	printf("the given day is tuesday");
else if(day_num==3)
	printf("the given day is wednesday");
else if(day_num==4)
	printf("the given day is thursday");
else if(day_num==5)
	printf("the given day is friday");
else if(day_num==6)
	printf("the given day is saturday");
else if(day_num==7)
	printf("the given day is sunday");
}
