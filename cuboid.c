#include<stdio.h>
int main()
{
	float l,b,h,a,v;
	printf("Enter length :");
	scanf("%f",&l);
	printf("Enter bredth :");
	scanf("%f",&b);
	printf("Enter height :");
	scanf("%f",&h);
	a=2*(l*b+l*h+b*h);
	v=l*b*h;
	printf("\n Surface area=%f",a);
	printf("\n Volume=%f",v);
}
