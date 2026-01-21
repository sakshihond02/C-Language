#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter Elemente :");
		scanf("%d",&a[i]);
	}
	printf("\n display even elements :");
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		printf("%d\t",a[i]);
	}
}
