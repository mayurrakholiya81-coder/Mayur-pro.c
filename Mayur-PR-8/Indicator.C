#include<stdio.h>

void main()
{
	printf("Q1. Find the length of string using pointer...!!\n\n");
	
	int i, temp = 0;
	int *p[100];
	char ary[100];
	
	printf("Enter any string :- ");
	scanf(" %[^\n]",&ary[i]);
	
	for(i=0; ary[i] != '\0' ;i++)
	{
		p[i] = &ary[i];
		temp++;	
	}
	
	printf("\n\nThe length of string is :- %d",temp);
	
	return 0;
}