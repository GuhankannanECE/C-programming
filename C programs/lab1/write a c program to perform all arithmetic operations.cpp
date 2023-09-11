/*write a c program to perform all arithmetic operations*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the value of both the numbers to be operated upon(operands).");
scanf("%d %d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
printf("The sum of the two numbers is : %d",c);
printf("The difference(subtraction) of the two numbers is: %d",d);
printf("The produnct of the two numbers is: %d",e);
printf("The division of the first number by the second number is: %d",f);
}
