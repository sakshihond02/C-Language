#include<stdio.h>
int main()
{
	float a,v,r,h;
	printf("Enter radius :");
	scanf("%f",&r);
	printf("Enter height :");
	scanf("%f",&h);
	a=2*3.14*r*(r+h);
	v=3.14*r*r*h;
	printf("\n volume of cylinder=%.2f",v);
	printf("\n Area of cylinder=%.2f",a);
}
