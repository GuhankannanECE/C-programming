#include<stdio.h>
int main()
{
int unit;
float rate;
printf("please enter the number of units");
scanf("%d",&unit);
if(unit>0&&unit<=100){
	rate=unit*2;
	printf("the electricity bill is :%f",rate);
}
else if(unit>100&&unit<=250){
	rate=unit*3.5;
	printf("the electricity bill is :%f",rate);
}
else{
	rate=unit*5;
	printf("the electricity bill is :%f",rate);
}

}

