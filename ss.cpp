#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,n,m;
	printf("How many rows you want ");
	scanf("%d",&n);
	printf("How many columns you want");
	scanf("%d",&m);
	printf("Enter the value for first matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The first matrix=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the value for second matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("The sum of matrices is:=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
return 0;
}
