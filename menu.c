#include<stdio.h>

void main(){
	
	int choice1,choice2;
	
	printf("\n Press 1 for english");
	printf("\n Press 2 for hindi");
	printf("\n Press 3 for Gujarati");
	
	printf("\n Enter your choice :- ");
	scanf("%d",&choice1);
	
	switch (choice1)
	{
		case 1:
		
			printf("\n Press 1 for internet recharge..!");
			printf("\n Press 2 for Top-up recharge..!");
			printf("\n Press 3 for Special	 recharge..!");
		
			printf("\n Enter your choice :- ");
			scanf("%d",&choice2);
			
			switch (choice2)
			{
				case 1:
					printf("YOUR INTERNET RECHAEGE DONE...!");
					break;
				
				case 2:
					printf("APKA INTERNET RECHAEGE HO CHUKA HE..!");
					break;
				
				case 3:
					printf("TAMARU INTERNET RECHAEGE THAY GAYOU CHHE");
					break;
				
				}
			
		break;		
	}
	
}