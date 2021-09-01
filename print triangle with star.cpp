#include<stdio.h>
#include<conio.h>
int main()
{
	int row,r,c;
	printf("Enter how many lines u want:");
	scanf("%d",&row);
	for(r=1;r<=row;r++)
	{
		for(c=1;c<=r;c++)
		printf("*");
		printf("\n");
	}
	return(0);
}
