#include<stdio.h>
int main()
{
	float u,a,t,v,s;
	printf("Enter initial velocity :");
	scanf("%f",&u);
	printf("Enter accleration :");
	scanf("%f",&a);
	printf("Enter time :");
	scanf("%f",&t);
	v=u+a*t;
	s=u+a*t*2;
	printf("\n Final velocity=%.2f",v);
	printf("\n distance travelled=%.2f",s);
}
