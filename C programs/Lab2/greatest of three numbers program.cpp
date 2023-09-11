#include<stdio.h>
int main()
{
int a,b,c;
printf("please enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c)
	printf("greatest number is %d",a);
else if (b>c)
	printf("graetest number is %d",b);
else
	printf("greatest numbers is %d",c);
}
