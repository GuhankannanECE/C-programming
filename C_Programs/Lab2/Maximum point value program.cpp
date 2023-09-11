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
else
	printf("the maximum point value %d",c);
/* here the case for all three being equal and any two being equal is also works*/

}
