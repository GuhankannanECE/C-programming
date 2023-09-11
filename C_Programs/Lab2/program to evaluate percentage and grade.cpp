#include<stdio.h>
int main()
{
int comp,phy,chem,bio,math,average;
printf("plaese enetr the marks scored in computer science");
scanf("%d",&comp);
printf("plaese enetr the marks scored in physics");
scanf("%d",&phy);
printf("plaese enetr the marks scored in chemistry");
scanf("%d",&chem);
printf("plaese enetr the marks scored in biology");
scanf("%d",&bio);
printf("plaese enetr the marks scored in mathematics");
scanf("%d",&math);
average=(comp+phy+chem+bio+math+average)/5;
if(average>=90)
	printf("percentage is %d Grade A",average);
if(average>=80&&average<90)
	printf("percentage is %d Grade B",average);
if(average>=70&&average<80)
	printf("percentage is %d Grade C",average);
if(average>=60&&average<70)
	printf("percentage is %d Grade D",average);
if(average>=40&&average<60)
	printf("percentage is %d Grade E",average);
if(average<40)
	printf("percentage is %d Grade F",average);   


}
