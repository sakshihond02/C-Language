#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter Number :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter Number :");
		scanf("%d",&a[i]);
	}
	printf("\n Display Elements");
	
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
		printf("%d\t",a[i]);
	}
	printf("\n Sum of all Elements=%d",sum);
}
