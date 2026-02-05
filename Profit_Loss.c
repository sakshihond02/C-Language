#include<stdio.h>
int main()
{
	int CP,SP,P,L;
	printf("Enter Cost Price :");
	scanf("%d",&CP);
	printf("Enter Selling Price :");
	scanf("%d",&SP);
	if(SP>CP)
	  {
	  	P=SP-CP;
	  	printf("Seller Made Profit=%d",P);
	  }
	else if(CP>SP)
	  {
	  	L=CP-SP;
	  	printf("Seller Made Loss=%d",L);
	  }
}
