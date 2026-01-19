#include<stdio.h>
void main()
{
	
	int i=1,no,sum=1;
	
	printf("enter your value:- ");
	scanf("%d",&no);
	
	do{
		
		sum *= i;
		i++;
		
	}while(i<=no);
	 
	printf("\nvalue is %d:- %d",no,sum);
	
}