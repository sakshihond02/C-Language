#include<stdio.h>
int main()
{
	int amt,ten,five,one;
	printf("Enter amount :");
	scanf("%d",&amt);
	
	ten=amt/10;
	amt=amt%10;
	five=amt/5;
	amt=amt%5;
	one=amt;
	
	printf("\n ten=%d",ten);
	printf("\n five=%d",five);
	printf("\n one=%d",one);
}
