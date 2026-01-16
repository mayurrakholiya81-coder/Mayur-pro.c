#include<stdio.h>

void main(){
	
	// Q-1 Find The MAximum Number Using Nested if else !
	
	int first-number,second-number,Third-number;
	
	printf("Enter your value of the first-number:- ");
	scanf("%d",&first-number);
	
	printf("Enter your value of the second-number:- ");
	scanf("%d",&second-number);
	
	printf("Enter your value of the Third-number:- ");
	scanf("%d",&Third-number);
	
	if(first-number>second-number){
		if(first-number>Third-number){
			printf("first-number is big");
		}else{
			printf("Third-number is big");
		}
	}else{
		printf("second-number is big");
	}
}	
