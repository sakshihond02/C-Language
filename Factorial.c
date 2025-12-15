#include<stdio.h>
int main()
{
	int a,n,fact=1;
	printf("Enter Number :");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		fact=fact*a;
		a++;
	}
	printf("Factorial Of Number=%d",fact);
}
