#include<stdio.h>
#include<conio.h>
int main()
{
	int row,r,c;
	printf("\ne");
	scanf("%d",&row);
	for(r=1;r<=row;r++)
	{
	
		for(c=1;c<=row;c++)
		printf("%d",c);
		printf("\n");
	}
	return(0);
}
