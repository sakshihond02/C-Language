#include<stdio.h>
int main()
{
	float AM,HM,a,b;
	printf("Enter number :");
	scanf("%f",&a);
	printf("Enter number :");
	scanf("%f",&b);
	AM=(a+b)/2;
	HM=a*b/(a+b);
	printf("Arithmetic=%f",AM);
	printf("Harmonic=%f",HM);
}
