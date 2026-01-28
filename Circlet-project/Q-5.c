#include<stdio.h>

main()

{
	// Question-5...!!
	
	int i, j, k;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j<=5;j++)
		{
			printf("%d",j);
		}
		for(j=(5-1);j>(4-i)+1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}