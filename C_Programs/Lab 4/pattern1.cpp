#include<stdio.h>
int main()
{
	int i,j,s,n;
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
}


