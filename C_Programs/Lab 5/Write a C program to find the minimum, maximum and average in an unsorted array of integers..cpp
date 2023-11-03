#include<stdio.h>
int main()
{
	int i,n,m,M,s,avg;
	printf("plaese enter the value of n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers in the list");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	M=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]>M)
		{
			M=a[i];
		}
	}
	m=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]<m)
		{
			m=a[i];
		}
	}
s=0;
for(i=0;i<n;i++)
	{
		s=s+a[i];
		avg=s/n;
	}
printf("maximum number in the array is :%d",M);
printf("Lowest number in the array is :%d",m);
printf("average of numbers in the array is :%d",avg);
}