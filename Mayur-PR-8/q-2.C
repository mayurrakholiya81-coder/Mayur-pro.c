#include<stdio.h>

int cube2d(int a)
{
	return a*a*a;
}


void main()
{
	int i, j, s;
	
	printf("Q2. Cubes generator using pointer and UDF...!!\n\n");
	
	printf("Enter the size of array :- ");
	scanf("%d",&s);
	
	int ary[s][s];
	
	int *p[s][s];
	
	printf("\nEnter array's elements :- \n");
	
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&ary[i][j]);
		}
	}
	
	printf("\nCubes of all elements :- \n");
	
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			p[i][j] = &ary[i][j];
			printf("%d ",cube2d(*p[i][j]));
		}
		printf("\n");
	}
}