#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter Number :");
	scanf("%d",&num);
	i=1;
	do{
		printf("%d",i*num);
		i++;
	}while(i<=10);
}
