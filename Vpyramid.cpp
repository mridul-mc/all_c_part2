#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=1;k<=(2*n-2*i);k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//2nd part
	for(i=n-1;i>=1;i--)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=1;k<=(2*n-2*i);k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
