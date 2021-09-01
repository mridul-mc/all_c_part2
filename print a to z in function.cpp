#include<stdio.h>
#include<conio.h>
int switc(int,int,int,int,char,char);
int main()
{
	int n,i,j,k;
	char c,a,z;
do{
	printf("[1] Enter the no:");
	scanf("%d",&n);

	
	printf("\n[2] Enter the Character:");
	c=getche();
	printf("\n");
	
	printf("\n[3] Enter the Alphabet(IN CAPITAL WORD):");
	a=getche();
	printf("\n");
	printf("\n");

	switc(n,i,j,k,c,a);
	
	printf("[4] Do you want to continue this program(y/n):");
	scanf("%c",&z);
	z=getche();
	printf("\n");
	printf("\n");
}while(z=='y' || z=='Y');
return(0);

return(0);
}

int switc(int n,int i,int j,int k,char c,char a)
{

switch(a)          //switching start
{
	case 'A':
	case 'a':
			for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		printf("%c%c",c,c);
		for(j=0;j<i*2;j++)
		{
			if(i>4 && i<7)
		{
			printf("%c",c);
		}
		else
			printf(" ");
		}
		
		printf("%c%c",c,c);
		printf("\n");
	}
		break;
/***************************************************/
	case 'B':
	case 'b':
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
	case 'c':
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
case 'd':
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
	case 'e':
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
	case 'f':
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
case 'G':
	case 'g':
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
			for(j=0;j<1;j++)
			{
				printf(" ");
			} 
			for(j=0;j<n-5;j++)
			{
				if(i==n/2+1)
				{
				printf("%c",c);
				}
				else
				printf(" ");           
			}       
			for(j=0;j<2;j++)                                                   
			{
				if(i>n/2)
				{
					printf("%c",c);
				}
				else
				printf(" ");
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
	case 'H':
	case 'h':
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
	case 'i':
		
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
	case 'j':
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
	case 'k':
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
	case 'l':
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
	case 'm':	
		    
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
	case 'n':
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
	case 'o':
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
	case 'p':
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
	case 'q':
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
	case 'r':
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
	case 's':
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
	case 't':
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
	case 'u':
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
	case 'v':
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
	case 'w':
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
	case 'x':
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
	case 'y':
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
	case'z':
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
}
}
