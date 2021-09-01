#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j,i;
	printf("Enter a no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	
	{
		for(j=n;j>=i;j--)
		printf(" ");
	}
	
	{
		for(j=1;j<=i;j++)
		printf(" *");
		printf("\n");
	}
   }
return(0);

}
