#include<stdio.h>
#include<conio.h>
int main()
{
	int r,a[' '][' '],b[' '][' '],res[' '][' '],k,sum,i,j;
	printf("Enter the row numbers and coloum number:");
	scanf("%d",&r);
printf("\nEnter the first matrix:");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
printf("\nEnter the second matrix:");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//start product
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			for(k=1;k<=r;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			res[i][j]=sum;
			sum=0;
		}
	}
	//show
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
			printf("%4d",res[i][j]);
		}
		printf("\n");
	}
	return(0);
}
