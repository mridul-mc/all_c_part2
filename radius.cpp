#include <stdio.h>  
int main()  
{  
	int ra; 
	printf("Enter radius:");
	scanf("%d",&ra);
    float pie=3.14285714286;  
    double ans=(4.0/3.0)*pie*(ra*ra*ra);  
    printf("Volume of the sphere=%f",ans);  
} 
