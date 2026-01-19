#include<stdio.h>
int main()
{
	int num,rev,d,n,i;
	printf("Enter limit :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		num=i;
		rev=0;
		while(num>0)
		{
			d=num%10;
			rev=rev*10+d;
			num=num/10;
		}
		if(rev==i)
		  printf("\t%d",i);
	}
}
