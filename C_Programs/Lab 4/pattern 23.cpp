//pattern23
#include<stdio.h>
int main()
{
	int n,i,j,s=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<=n-2;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<n;j++)
				printf("%d",s);
			printf("%d",s+1);
		}
		else
		{
			printf("%d",s+1);
			s--;
			for(j=0;j<n;j++)
				printf("%d",s);
			s++;
		}
		printf("\n");
	}
	return 0;
}
