/*write a c program to swap two numbers withput using third variable*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter the two numbers");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the swaped numbers are : %d %d",a,b);
}
