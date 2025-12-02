#include<stdio.h>
int main()
{
	float f,c,k;
	printf("\n Enter temperture :");
	scanf("%f",&f);
	c=0.5/9*(f-32);
	k=c+273.15;
	printf("\n celcius=%.2f",c);
	printf("\n kelvin=%.2f",k);
}
