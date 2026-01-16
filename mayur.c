#include<stdio.h>

main()
{
 int marks;
 char grade;
	
 printf("Enter Your marks Out Of 100 :- ");
 scanf("%d",&marks);
	
 if (marks<=0)
 {
  printf("Please enter valid marks...!!");
 }
 else{
  (marks > 90)
  ? printf("\nYour Grade Is A ...!!")
  : (marks > 70)
   ? printf("\nYour Grade is B ...!!")
   : (marks > 60)
    ? printf("\nYour grade is C ...!!")
    : (marks > 35)
     ? printf("\nYour grade is D ...!!")
     : (marks <= 35)
      ? printf("\nYour grade is F ...!!") 
      : printf(" ");
      
  if (marks > 90)
  {
   grade = 'A';
  }
  else if(marks > 70){
   grade = 'B';
  }
  else if(marks > 60){
   grade = 'C';
  }
  else if(marks > 35){
   grade = 'D';
  }
  else if(marks <= 35){
   grade = 'F';
  }
  
  switch (grade){
   case 'A':
    printf("\nExcellent Work...!!");
    break;
   case 'B':
    printf("\nWell Done...!!");
    break;
   case 'C':
    printf("\nGood Job...!!");
    break;
   case 'D':
    printf("\nYou Passed, But you could do better...!!");
    break;
   case 'F':
    printf("\nSorry, You Failed...!!");
    break;
  }
  
  if ((grade == 'A') || (grade == 'B') || (grade == 'C') || (grade == 'D'))
  {
   printf("\nCongratulations ! You are eligible for next level...!!");
  }
  else
  {
   printf("\nPlease try again next time...!!");
  }
  }
	
}
