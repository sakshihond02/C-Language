#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter Element :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("Sum of all odd position=%d",sum);	
}
