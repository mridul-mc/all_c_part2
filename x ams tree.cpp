#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int i,n,j,k;
	printf("Enter the no:");
	scanf("%d",&n);
	
	for(k=0;k<n;k++)
	{
	for(j=n;j>k;j--)
		{
			printf(" ");
		}
		
	for(j=0;j<k;j++)
		{
			printf("^ ");
		}
		
	for(j=n;j>k;j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	
//	printf("\b");
	
	for(k=3;k<n;k++)    //2nd time
	{
	for(j=n;j>k;j--)
		{
			printf(" ");
		}
		
	for(j=0;j<k;j++)
		{
			printf("^ ");
		}
		
	for(j=n;j>k;j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	
	for(k=4;k<n;k++)    //3nd time
	{
		for(j=n;j>k;j--)
		{
			printf(" ");
		}
		
	for(j=0;j<k;j++)
		{
			printf("^ ");
		}
		
	for(j=n;j>k;j--)
		{
			printf(" ");
		}
		printf("\n");
	}
	
	//for()
	
	
	for(k=0;k<n/2;k++)
	{
		for(i=0;i<n-1;i++)
		{
			printf(" ");
		}
		printf("||");
		printf("\n");
		
	}
}
	

