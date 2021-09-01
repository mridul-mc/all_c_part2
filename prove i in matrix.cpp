#include<stdio.h>
#include<conio.h>
int main()
{
	int a[' '][' '],r,c,i,j,n;
	printf("Enter the row no:");
	scanf("%d",&r);
	printf("Enter the coloum no:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			a[i][j]=0;
			else
			a[i][j]=1;
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%2d",a[i][j]);
		printf("\n");
	}
return(0);
} 

