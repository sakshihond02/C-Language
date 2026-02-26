#include<stdio.h>
int main()
{
	int sal,DA,RA,B;
	printf("Enter Salary :");
	scanf("%d",&sal);
	DA=sal*10/100;
	RA=sal*20/100;
	B=sal*3/100;
	sal=sal+DA+RA+B;
	  printf("Salary=%d",sal);
}
