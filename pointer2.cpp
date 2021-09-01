#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	int *p,*q;
	x=10;
//	int j=946;
	p=&x;
	y=*p;
	printf("value of x=%d",x);
	printf("\nx is stored at add=%u",&x);
//	printf("\nj is stored at add=%u",&j);
	printf("\nValue of x using pointer=%d",*p);
//	q=&j;
//	printf("\n%d",*q);
	printf("\nAddress of x using pointer=%u",p);
	printf("\nValue of x in y=%d",y);
	*p=20;
	printf("\nnow x become=%d",x);
	
}
