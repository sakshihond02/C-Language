#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter Number :");
	scanf("%d",&num);
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(i==num)
	   printf("Number is Prime");
	else
	   printf("Number is Not Prime");
}
