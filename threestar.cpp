#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int sp=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		sp--;
		for(j=1;j<=(2*i-1);j++)
		printf("*");
		printf("\n");
	}
}
