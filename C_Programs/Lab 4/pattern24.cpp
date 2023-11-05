#include<stdio.h>
int main()
{
	int i,j,k=1,n,p,q,r,s;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n][n];
	for(i=0;i<(n+1)/2;i++)
	{
		for(p=i;p<n-i;p++)
		{
			a[i][p] = k;
			k++;
		}
		
		for(q=i+1;q<n-i;q++)
		{
			a[q][n-i-1] = k;
			k++;
		}
		
		for(r=n-i-2;r>=i;r--)
		{
			a[n-i-1][r] = k;
			k++;
		}
		
		for(s=n-i-2;s>i;s--)
		{
			a[s][i] = k;
			k++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
