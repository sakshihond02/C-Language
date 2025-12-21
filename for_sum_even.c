#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	for(i=2; i<=n; i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("Sum Of Even Numbers=%d",sum);
}
