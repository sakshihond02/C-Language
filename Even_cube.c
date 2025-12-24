#include<stdio.h>
int main()
{
	int a;
	printf("Enter Number :");
	scanf("%d",&a);
	if(a%5==0 && a%7==0)
	{
		if(a%2==0)
		{
			printf("Number is Even");
			printf("\n Cube=%d",a*a*a);
		}
		else
		{
			printf("Number is Odd");
		    printf("\n Square=%d",a*a);
		}
	}
	else
	   printf("Number is not divisible by 5 and 7");
}
