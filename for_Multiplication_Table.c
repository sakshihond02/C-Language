#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter Limit :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("\n Multiplication Table=%d",i);
	    for(j=1; j<=10; j++)
	    {
	    	printf("\n %d",i*j);
		}
    }
}
