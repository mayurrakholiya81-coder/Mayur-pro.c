#include<stdio.h>

void main(){
	
	int i=0,no,sum = 0;
	
	printf("Enter any number:- ");
	scanf("%d",&no);
	
	while(i<=no)
	{
		sum += i;
		i++;
	
	}
	printf("\n the total sum of %d:- %d",no,sum);
}