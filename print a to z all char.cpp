#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,j,k;
	char c,a,z;
	do{
	printf("Enter the no:");
	scanf("%d",&n);
	
	printf("\nEnter the Character:");
	c=getche();
	printf("\n");
	
	printf("\nEnter the Alphabet(IN CAPITAL WORD):");
	a=getche();
	printf("\n");
	printf("\n");

	
switch(a)          //switching start
{
/***************************************************/
	case 'B':
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	for(i=0;i<n-3;i++)
		{
			for(j=0;j<3;j++)
			printf("%c",c);
			
			for(j=0;j<n-3;j++)
			{
				printf(" ");
			}
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	for(j=1;j<=1;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
	for(j=1;j<=1;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	for(i=0;i<n-3;i++)
		{
			for(j=0;j<3;j++)
			printf("%c",c);
			
			for(j=0;j<n-3;j++)
			{
				printf(" ");
			}
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		
	for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
	break;
/***************************************************/
	case 'C':
			for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			printf("%c",c);
			printf("\n");
		}
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
	break;
/***************************************************/
case 'D':
	for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			printf("%c",c);
			
			for(j=0;j<n-2;j++)
			{
				printf(" ");
			}
			for(j=0;j<3;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
break;	
/***************************************************/
	case 'E':
		for(i=1;i<=2;i++)         
			{
				for(j=1;j<=n+3;j++)
				{
					printf("%c",c);
				}
			printf("\n");
			}	
		for(i=1;i<=n;i++)   
			{
				for(j=1;j<=3;j++)
				{
					printf("%c",c);
				}
			printf("\n");
			}
		for(i=1;i<=2;i++)   
			{
				for(j=1;j<=n+3;j++)
				{
					printf("%c",c);
				}
			printf("\n");
			}
		for(i=1;i<=n;i++)     
			{
				for(j=1;j<=3;j++)
				{
					printf("%c",c);
				}
			printf("\n");
			}
	
		for(i=1;i<=2;i++)         
			{
				for(j=1;j<=n+3;j++)
				{
					printf("%c",c);
				}
			printf("\n");
			}
	break;	
/***************************************************/
	case 'F':
		for(i=1;i<=2;i++)        
		{
			for(j=1;j<=n+2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=1;i<=4;i++)
			{
				for(j=1;j<=3;j++)
				{
					printf("%c",c);
				}
				printf("\n");
			}
		for(i=1;i<=2;i++)
			{
				for(j=1;j<=n;j++)
			{
				printf("%c",c);
			}
			printf("\n");
			}
		for(i=1;i<=n;i++)     
			{
			for(j=1;j<=3;j++)
			{
				printf("%c",c);
			}
			printf("\n");
			}
	break;
/***************************************************/
	case 'H':
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=2;j++)
			{
				printf("%c",c);
			}
			for(j=1;j<=n;j++)
			{
				printf(" ");
			}
			for(j=1;j<=2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	
		for(i=1;i<=2;i++)
		{
			for(j=1;j<=n+4;j++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
	
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=2;j++)
			{
				printf("%c",c);
			}
			for(j=1;j<=n;j++)
			{
				printf(" ");
			}
			for(j=1;j<=2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	break;
/***************************************************/
	case 'I':
		
		for(j=1;j<=3;j++)
			printf("%c",c);
			printf("\n");
		for(j=1;j<=n;j++)
		{
			for(i=1;i<=1;i++)
			{
				printf(" ");
			}
			for(i=1;i<=1;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
		for(j=1;j<=3;j++)
			printf("%c",c);
			printf("\n");
	break;

/***************************************************/
	case 'J':
		for(i=1;i<=2;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		
		for(i=1;i<=n;i++)
		{
			
			for(j=1;j<=n/2-1;j++)
			{
				printf(" ");
			}
			for(j=1;j<=3;j++)
			{
				printf("%c",c);
			}
		printf("\n");
		}
		for(i=1;i<=2;i++)
		{
			for(j=1;j<=n/2-1+3;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	break;
/****************************************************/
	case 'K':
			for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		printf("%c",c);
		printf("\n");
	}
	
		
		for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		printf("%c",c);
		printf("\n");
	}
	break;
/***************************************************/
	case 'L':
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=1;j++)
				{
					printf("*");
				}
			printf("\n");
		}
		for(i=0;i<2;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	break;
/***************************************************/
	case 'M':  	
		    
		for(i=0;i<=n;i++)    
		{
			for(j=0;j<=1;j++)  
			{
				printf("%c",c);
			}
		
			for(k=1;k<=i;k++)  
			{
				printf(" ");
			}
		
			for(j=0;j<=1;j++)  
			{
				printf("%c",c);
			}
		
			for(k=n-1;k>=i;k--)  
			{
				printf("  ");
			}
		
			for(j=0;j<=1;j++)  
			{
				printf("%c",c);
			}
		
				for(k=1;k<=i;k++) 
			{
				printf(" ");
			}
		
			for(j=0;j<=1;j++)  
			{
				printf("%c",c);
			}	
			printf("\n");
		}
	break;
/***************************************************/
	case 'N':
			for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		for(k=n-1;k>i;k--)
		{
			printf(" ");
		}
		
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		printf("\n");
		 
	}
	break;
/***************************************************/
	case 'O':
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			printf("%c",c);
			
			for(j=0;j<n-4;j++)
			{
				printf(" ");
			}
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
break;
/***************************************************/
	case 'P':
		for(j=1;j<=2;j++)
	{
		for(i=1;i<=n+2;i++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	
	for(j=1;j<=n/2;j++)
	{
		for(i=1;i<=2;i++)
		{
			printf("%c",c);
		}
		
		for(i=1;i<=n-2;i++)
		{
			printf(" ");
		}
		
		for(i=1;i<=2;i++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	
	for(j=1;j<=2;j++)
	{
		for(i=1;i<=n+2;i++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	
	for(j=1;j<=n-2;j++)
	{
		for(i=1;i<=2;i++)
		{
			printf("%c",c);
		}
	printf("\n");
	}
	break;
/***************************************************/
	case 'Q':
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=0;i<n-5;i++)
		{
			for(j=0;j<2;j++)
			printf("%c",c);
			
			for(j=0;j<n-4;j++)
			{
				printf(" ");
			}
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
	for(j=0;j<1;j++)
	{
		for(i=0;i<n;i++)
		{
			printf(" ");
		
		}
		printf("\b");
			printf("%c%c",c,c);
	}
	break;
/***************************************************/
	case 'R':
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=0;i<n-5;i++)
		{
			for(j=0;j<2;j++)
			printf("%c",c);
			
			for(j=0;j<n-4;j++)
			{
				printf(" ");
			}
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(j=1;j<=2;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf("%c",c);
			}
			printf("\n");
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			for(j=0;j<2;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	break;
/**************************************************/
	case 'S':
			for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",c);
		}
	printf("\n");
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
	printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",c);
		}
	printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-2;j++)
		{
			printf(" ");
		}
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
	printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",c);
		}
	printf("\n");
	}
	break;
/*************************************************/
	case 'T':
		for(i=1;i<=2;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n/2-1;j++)
			{
				printf(" ");
			}
			for(j=1;j<=3;j++)
			{
				printf("%c",c);
			}
		printf("\n");
		}
	break;
/***************************************************/
	case 'U':
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=2;j++)
				{
					printf("%c",c);
				}
			for(j=1;j<=n;j++)
				{
					printf(" ");
				}
			for(j=1;j<=2;j++)
				{
					printf("%c",c);
				}
			printf("\n");
		}
		for(i=1;i<=2;i++)
		{
			for(j=1;j<=n+4;j++)
			{
				printf("%c",c);
			}
			printf("\n");
		}
	break;
/***************************************************/
	case 'V':
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("%c%c",c,c);
		for(j=n;j>=i;j--)
		{
			printf("  ");
		}
		printf("%c%c",c,c);
		printf("\n");
	}
	
	for(i=1;i<=1;i++)
	{
		for(j=1;j<n+2;j++)
		{
			printf(" ");
		}
		printf("%c%c%c%c",c,c,c,c);
		printf("\n");
	}
	break;
/***************************************************/
	case 'W':
		for(i=0;i<=n;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		
		for(k=1;k<=i;k++)
		{
			printf("  ");
		}
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<2;j++)
		{
			printf("%c",c);
		}
		
		printf("\n");
	}
	break;
/***************************************************/
	case 'X':
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j || j==(n-i-1))
				{
					printf("%c",c);
				}
				else
				{
					printf(" ");
				}
			}
		printf("\n");
		}
	break;
/***************************************************/
	case 'Y':
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("%c%c",c,c);
		for(j=n;j>=i;j--)
		{
			printf("  ");
		}
		printf("%c%c",c,c);
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	break;
/***************************************************/
	case'Z':
		for(i=0;i<2;i++)
	{
		for(j=1;j<=n+2;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		printf("%c%c",c,c);
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	break;
/***************************************************/


}//switch air bracers
	printf("Do you want to continue this program(y/n):");
	scanf("%c",&z);
	z=getche();
	printf("\n");
	printf("\n");
}while(z=='y' || z=='Y');
return(0);
	
}    //MAIN AIR BRACERS
