#include<stdio.h>
#include<conio.h>
int main()
{
	long int len;
	int i,j,rem,k,v=0,show,a[' '],wow;
	printf("Enter the length:");
	scanf("%ld",&len);
	
	for(j=2;j<=len;j++)			
	{
		for(i=2;i<j;i++)				
		{
		rem=j%i;
		if(rem==0)
			{
				break;			
			}
 		}
		if(j==i)                    
		{
		printf("%d\t",j);
		//printf("\n");
		//	a[v]=j;
		  //  v++;
		}	
	}
//printf("/********************************************/");
//printf("\n");
/*for(k=0;k<len;k++)
{
	printf("%d\t",a[k]);
}*/
	
/*	printf("\nHow many no you want to see:");
	scanf("%d",&show);
	
	for(k=0;k<show;k++)
	{
		printf("%d\n",a[k]);
	}*/
	
	return(0);
}
 
