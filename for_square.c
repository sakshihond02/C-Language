#include<stdio.h>
int main()
{
	int a,b,i,c;
	printf("Enter Two Numbers :");
	scanf("%d %d",&a,&b);
	for(i=a; i<=b; i++)
	{
		c=i*i;
		printf("\n Square Of Numbers=%d",c);
	}
}
