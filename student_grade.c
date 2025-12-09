#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Marks :");
	scanf("%d",&marks);
	if(marks>=75)
	   printf("Distinction");
	else if(marks>=60 && marks<75)
	   printf("First Class");
	else if(marks>=50 && marks<60)
	   printf("Second Class");
	else if(marks>=35 && marks<50)
	   printf("Pass");
	else 
	   printf("Fail");
}
