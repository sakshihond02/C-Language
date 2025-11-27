#include<stdio.h>
int main()
{
	int a,sum=0,n;
	printf("Enter Number :");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("Sum of 1 to n numbers=%d",sum);
}
