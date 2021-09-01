#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,product,number1,number2;
	printf("Enter 1st and 2nd number:");
	scanf("%d %d",&number1,&number2);
	sum=(number1+number2);
	printf("Result of sum:%d",sum);
	product=(number1*number2);
	printf("\nResult of product:%d",product);
	return(0);
}
