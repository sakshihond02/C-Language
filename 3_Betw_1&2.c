#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("Enter 2nd Number :");
	scanf("%d",&b);
	printf("Enter 3rd Number :");
	scanf("%d",&c);
	if(c>=a && c<=b)
	  printf("c is between a & b");
	else
	  printf("c is not between a & b");
}
