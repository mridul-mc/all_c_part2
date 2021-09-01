#include<stdio.h>
#include<conio.h>
void swap(int,int);
void swapw(int *,int *);
int main()
{
	int a,b;
	a=20;
	b=30;
	
	printf("before swap in main a=%d and b=%d",a,b);
	swap(a,b);
	printf("\nAfter swap in main a=%d and b=%d",a,b);
	
	printf("\n******************************");
	
	printf("\nbefore swap in main a=%d and b=%d",a,b);
	swapw(&a,&b);
	printf("\nAfter swap in main a=%d and b=%d",a,b);
	
	return(0);
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("\nAfter swap a=%d and b=%d",a,b);
}
void swapw(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("\nAfter swap a=%d and b=%d",*a,*b);
}
