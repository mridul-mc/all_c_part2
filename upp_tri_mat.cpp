#include<stdio.h>
#include<conio.h>
int main()
{
	int a[' '] [' '],i,j,r,c;
	printf("Enter the row numbers: ");
	scanf("%d",&r);
	printf("\nEnter the column numbers: ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>j)
			   a[i][j]=0;
			else
			   scanf("%d",&a[i][j]);    
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d ",a[i][j]); 
		}
		printf("\n");
	}
	return(0);
}
