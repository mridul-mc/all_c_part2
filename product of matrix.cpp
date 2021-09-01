#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],res[3][3],sum=0,i,j,k,n;
	printf("Enter the first matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the second matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			res[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",res[i][j]);
		}
		printf("\n");
	}
}  
