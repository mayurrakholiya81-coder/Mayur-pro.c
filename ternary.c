#include<stdio.h>

void main(){
	
	int a,b,c;
	
	printf(" Enter a value of the first number:- ");
	scanf("%d",&a);
	
	printf(" Enter a value of the second number:- ");
	scanf("%d",&b);
	
	printf(" Enter a value of the third number:- ");
	scanf("%d",&c);
	
	(a>b)
		?(a > c)
			?printf("a is big")
			:printf("c is big")
		:(b > c)
		?printf("b is big")
		:printf("c is big");
}