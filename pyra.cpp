#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char c;
	
	printf("Enter the no:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
}
