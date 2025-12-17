#include<stdio.h>
int main()
{
	int num,d,sum=0,num1;
	printf("Enter Number :");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		d=num%10;
		sum=sum+(d*d*d);
		num=num/10;
	}
	if(sum==num1)
	  printf("Number is Armstrong");
	else
	  printf("Number is Not Armstrong");	  
}
