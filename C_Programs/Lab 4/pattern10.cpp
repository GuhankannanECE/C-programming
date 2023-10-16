#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	printf("please enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			for(j=0;j<i+1;j++)
			{
				printf("*");
			}
			printf("\n");
	}
	for(k=0;k<n;k++)
	{
			for(m=0;m<n-k;m++)
			{
				printf("*");
			}
			printf("\n");
	}

}


