#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,num,s1=0,s2=0,sun;
	printf("Enter a terms:");
	scanf("%d",&num);
	for(i=1;i<=num;i+=2)
	{
		s1=s1+i;
	}
	for(j=2;j<=num;j+=2)
	{
		s2=s2+j;
	}
	sun=s1-s2;
	printf("%d",sun);
	return(0);
}




  
