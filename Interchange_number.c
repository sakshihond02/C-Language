#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
}
