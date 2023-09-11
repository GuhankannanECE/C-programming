#include<stdio.h>
int main()
{
int a,b,c;
printf("please enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&b==c)
	printf("the triangle is equilateral");
else if(a==b||b==c||c==a)
	printf("the given triangle is isosceles");
else
	printf("the given triangle is scalene");
}
