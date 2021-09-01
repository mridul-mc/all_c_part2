#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	float sum,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=1+(1/i);
	}
	printf("%.2f",sum);
	return(0);
}
