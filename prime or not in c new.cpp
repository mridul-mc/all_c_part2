#include<stdio.h>
#include<conio.h>
int main()
{
	int i,r,j,u,l;
	printf("Enter the start value:");
	scanf("%d",&u);
	printf("Enter the end value:");
	scanf("%d",&l);
	
	for(j=u;j<=l;j++)
	{
	for(i=2;i<j;i++)
	{
		r=j%i;
		if(r==0)
		{
			printf("not prime");
		break;
		}
	}
		if(j==i)
		{
			printf("prime");
		}
	}
	return(0);
}
