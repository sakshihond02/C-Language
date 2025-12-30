#include<stdio.h>
int main()
{
	int i,j,fact=1,n;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[i];
	printf("Enter Elements :");
	for(i=0; i<n; i++)
	{
		printf("Enter Elemente :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		fact=1;
		for(j=1; j<=a[i]; j++)
		{
			fact=fact*j;
		}
		printf("%d\t",fact);
	}
}
