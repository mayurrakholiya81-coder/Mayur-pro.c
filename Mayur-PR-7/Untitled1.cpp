
#include<stdio.h>

int add(int p, int q)
{
	printf("The addition of %d and %d is :- %d",p,q,p+q);
	return 0;
}
int sub(int p, int q)
{
	printf("The substraction of %d and %d is :- %d",p,q,p-q);
	return 0;
}
int mul(int p, int q)
{
	printf("The multiplication of %d and %d is :- %d",p,q,p*q);
	return 0;
}
int div(int p, int q)
{
	printf("The division of %d and %d is :- %d",p,q,p/q);
	return 0;
}
int mod(int p, int q)
{
	printf("The modulus of %d and %d is :- %d",p,q,p%q);
	return 0;
}

void main()
{
	int choice,num1,num2;
	
	do
	{
		
		printf("\n\n----- INSTRUCTIONS -----\n\n");
	
		printf("\nPress 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %%\n");
		printf("Press 0 for the exit\n\n");
	
		printf("------------------------\n\n");	
		
		printf("\nEnter Your Choice :- ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				
				printf("\n\nEnter The first number :- ");
				scanf("%d",&num1);
				
				printf("Enter The second number :- ");
				scanf("%d",&num2);
				
				add(num1,num2);
				break;
				
			case 2:
				printf("\n\nEnter The first number :- ");
				scanf("%d",&num1);
				
				printf("Enter The second number :- ");
				scanf("%d",&num2);
				
				sub(num1,num2);
				break;
			case 3:
				printf("\n\nEnter The first number :- ");
				scanf("%d",&num1);
				
				printf("Enter The second number :- ");
				scanf("%d",&num2);
				
				mul(num1,num2);
				break;
			case 4:
				printf("\n\nEnter The first number :- ");
				scanf("%d",&num1);
				
				printf("Enter The second number :- ");
				scanf("%d",&num2);
				
				div(num1,num2);
				break;
			case 5:
				printf("\n\nEnter The first number :- ");
				scanf("%d",&num1);
				
				printf("Enter The second number :- ");
				scanf("%d",&num2);
				
				mod(num1,num2);
				break;
			case 0:
				printf("You are exited...!!");
				break;
			default:
				printf("Something Went wrong...!! please enter valid choice !!");
		}
			
	}
	while(choice != 0);
	
}
