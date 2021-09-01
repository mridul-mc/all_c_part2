
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	for(i=10;i>=1;i--)
	{
		for(int k=1;k<=10-i;k++)
		printf(" ");
		for(int j=1;j<=i;j++)
		printf("* ");
		printf("\n");
	}
}

