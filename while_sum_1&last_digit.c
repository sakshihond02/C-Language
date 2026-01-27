#include<stdio.h>
int main()
{
	int num,sum=0,temp1,temp2;
	printf("Enter Number :");
	scanf("%d",&num);
	temp1=num%10;
	while(num>10)
	{
		num=num/10;
	}
	temp2=num;
	sum=temp1+temp2;
	printf("Sum of first & Last digit=%d",sum);
}
