void pri(int,int);
#include<stdio.h>
#include<conio.h>

int main()
{
	int s,sp;
	printf("Enter the start value:");
	scanf("%d",&s);
	printf("Enter the end value:");
	scanf("%d",&sp);
	pri(s,sp);
	return(0);
}
void pri(int s,int sp)
{
	int r,i,j;
	for(j=s;j<=sp;j++)
	{
		for(i=2;i<j;i++)
		{
			r=j%i;
			if(r==0)
			{
				printf("The no is not prime:%d\n",j);
				break;
			}
			//printf("/\n");
		}
			if(j==i)
			{
				printf("The prime no is:%d\n",j);
			}	
	}
}
