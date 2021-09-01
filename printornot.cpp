#include<stdio.h>
#include<conio.h>
//#include<process.h>
int main()
{
	int j,i,rem,len,want,k,a[100];
	printf("Enter the length:");
	scanf("%d",&len);
	printf("\n");
	if(len==0)
	printf("\tplease enter a number");
	if(len<0)
	printf("\tPlease enter a posative number");
		
	for(j=2;j<=len;j++)			//this is number
	{
		
		for(i=2;i<j;i++)			//test the number here	
		{
		rem=j%i;
		if(rem==0)
			{
				break;				//this is not prime number
			}
 		}
		if(j==i) 
		{
			printf("%d\t",j);    //this is prime number
		}
	}
	
	
	
	printf("\n");
return(0);	
}

		

