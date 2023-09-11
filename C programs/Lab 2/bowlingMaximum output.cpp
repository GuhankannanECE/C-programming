#include<stdio.h>
int main()
{
int a,b,c;
printf("please enter three bowling techniques:");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c)
	printf("the maximum point value is %d",a);
else if (b>c)
	printf("the maximum point value is %d",b);
else if (c>b)
	printf("the maximum point value %d",c);
else if(a==b||b==c||c==a)
	if(a==b&&a>c)
		printf("the maximum ouptut value is %d"a);
	else:
		printf("the maximum output value is %d")
else if(a==b&&b==c)
	printf(the maximum output value is %d",c);
}
