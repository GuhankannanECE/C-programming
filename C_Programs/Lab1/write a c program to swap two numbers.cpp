/*write a c program to swap two numbers*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the two numbers to be swapped.");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("the swaped numbers are %d %d",a,b);
}
