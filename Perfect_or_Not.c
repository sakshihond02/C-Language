#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter Number :");
	scanf("%d",&num);
	for(i=1; i<num; i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
		printf("Number is Perfect");
	else
	    printf("Number is Not Perfect");
	
}

