#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
	int num1=5,num2=10;
	printf("In main without swap-> num1:%d num2:%d",num1,num2);
	swap(&num1,&num2);
	printf("\n");
	printf("After swap in main-> num1:%d num2:%d",num1,num2);
}
void swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
	printf("\nAfter swap in function-> num1:%d num2:%d",*num1,*num2);
}
