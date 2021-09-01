#include<stdio.h>
#include<conio.h>
void sum(int,int);  //create function
int main()
{
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	sum(num1,num2);  //call function
}
void sum(int num1,int num2)
{
	int sum_of_number=(num1+num2);
	printf("Sum of two number:%d",sum_of_number);  //print the value in function
}
