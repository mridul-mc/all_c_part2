#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
	int num1,num2;
	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("Enter 2nd number:");
	scanf("%d",&num2);
	printf("%d",sum(num1,num2));
}
int sum(int x,int y)
{
	int s=x+y;
	return s;
}
