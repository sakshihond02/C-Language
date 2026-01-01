#include<stdio.h>
int main()
{
	int n,i,j,num;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter Elements :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		num=a[i];
		for(j=2; j<num; j++)
		{
			if(num%j==0)
			  break;
		}
		if(j==num)
		   printf("%d\t",a[i]);
	}
		
}
