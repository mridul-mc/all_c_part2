#include<stdio.h>
#include<conio.h>
int main()
{
	int num=121,i;
	for(i=0;i<3;i++)
	{
		printf("Right shift by %d %d\n",i,num>>i);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("left shift by %d %d\n",i,num<<i);
	}
}
