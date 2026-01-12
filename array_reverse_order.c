#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter element :");
		scanf("%d",&a[i]);
	}
	for(i=n-1; i>=0; i--)
	{
		printf("\t%d",a[i]);
	}
}
