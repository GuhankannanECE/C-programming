#include<stdio.h>#include<stdio.h>
int main()
{
	int i,j,n;
	printf("plaese enter the value of n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers in the list");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		{
		for(j=0;j<n;j++)
				a[i]=a[i]+a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]=a[i]-a[i+i];			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

