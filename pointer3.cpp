#include<stdio.h>
#include<conio.h>
int main()
{
	int num=10;
	int *poi;
	printf("Value of num variable:%d\n",num);
	printf("Address of num variable without pointer:%d\n",&num);
	poi=&num;
	printf("Address of num variable with pointer:%d\n",poi);
	printf("Value of num variable with pointer:%d\n",*poi);
	printf("Address of single pointer without pointer:%d\n",&poi);
	/* pointer to pointer */
	printf("\n\n****pointer to pointer****\n\n");
	int **dou_poi;
	dou_poi=&poi;
	printf("Value of dou_poi variable:%d\n",dou_poi);
	printf("Address of single pointer with double pointer:%d\n",dou_poi);
	printf("Value of num variable with double pointer:%d\n",**dou_poi);
	printf("Address of num variable with double pointer:%d\n",*dou_poi);
	printf("Address of dou_poi variable without pointer:%d",&dou_poi);
	/*pointer to pointer to pointer*/
	printf("\n\n****pointer to pointer to pointer***\n\n");
	int ***tri_poi;
	tri_poi=&dou_poi;
	printf("Value of tri_poi pointer:%d\n",tri_poi);
	printf("Address of double pointer with third pointer:%d\n",tri_poi);
	printf("Value of double pointer with third pointer:%d\n",*tri_poi);
	printf("value of single pointer or memory address of num variable:%d\n",**tri_poi);
	printf("Value of num variable with third pointer:%d",***tri_poi);
}
