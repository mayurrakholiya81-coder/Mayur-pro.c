#include<stdio.h>
void main(){
	
	int i=0,no,sum = 0;
	
	printf("Enter any number:- ");
	scanf("%d",&no);
	
	do{
	
		sum += i;
		i++;
		
		
	}while(i==1,i<=no);
	printf("number is %d:- %d",no,sum);
}