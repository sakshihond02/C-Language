#include<stdio.h>
int main()
{
	int num,n,sum,d,i;
	printf("Enter limit :");
	scanf("%d",&n);
	for(i=2; i<=n; i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			d=num%10;
			sum=sum+(d*d*d);
			num=num/10;
		}
		if(sum==i)
		  printf("\n%d",i);
	}
}
