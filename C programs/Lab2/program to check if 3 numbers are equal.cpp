#include<stdio.h>
int main()
{
int a,b,c;
printf("please enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if (a==b&&b==c)
	printf("all three numbers are equal.");
else
	printf("all the three numbers are not equal.");
}
	
