#include<stdio.h>
int main()
{
    int n,i,j,num;
    printf("Enter Limit :");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\n Enter First Array=");
    for(i=0; i<n; i++)
    {
    	printf("\n Enter Element :");
    	scanf("%d",&a[i]);
	}
    printf("\nEnter Second Array=");
	for(i=0; i<n; i++)
	{
		printf("\n Enter Element :");
		scanf("%d",&b[i]);
	}
	printf("\nUnion Elements=");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]==b[j])
			{
			  break;
			}
		}
		if(j==n)
		   printf("%d\t",b[i]);
	}
}
