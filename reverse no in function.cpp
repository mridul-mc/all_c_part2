#include<stdio.h>
#include<conio.h>
int revs(long int);
int main()
{
	long int n;
	printf("Enter the no:");
	scanf("%ld",&n);
	//revs(n);
	printf("the result is:%d",revs(n));
	return(0);
}
int revs(long int m)
{
	int s=0,r;
	while(m>0)
	{
		r=m%10;
		s=s*10+r;
		m=m/10;
	}
	return(s);
}

