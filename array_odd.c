#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter element :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		sum=sum+a[i];
	}
	printf("Sum of Odd elements=%d",sum);
}
