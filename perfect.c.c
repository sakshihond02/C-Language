#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter Number :");
	scanf("%d",&num);
	i=1;
	while(i<num)
	{
		if(num%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==num)
	  printf("\n Number is Perfect");
	else
	  printf("\n Number is not Perfect");
}
