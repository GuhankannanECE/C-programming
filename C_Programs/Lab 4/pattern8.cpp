#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("please enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			printf(" ");
		}		
		printf("***** \n");
	}

