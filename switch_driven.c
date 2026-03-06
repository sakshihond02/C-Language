#include<stdio.h>
int main()
{
	int a,b,c,ch;
	float AM,HM;
	printf("Press 1:Swap the values of two variable :");
	printf("\n Press 2:Calculate Arthmatic mean & Harmonic mean :");
	printf("\n Press 3:Calculate Multiplication of two numbers :");
	printf("\n Enter Your Choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				printf("Enter two numbers :");
				scanf("%d %d",&a,&b);
				c=a;
				a=b;
				b=c;
				printf("Value of a=%d",a);
				printf("Value of b=%d",b);
				break;
			}
		case 2:
			{
				printf("Enter two numbers :");
				scanf("%d %d",&a,&b);
				AM=(a+b)/2;
				HM=a*b/(a+b);
				printf("Arithmatic Mean=%f",AM);
				printf("Harmonic Mean=%f",HM);
				break;
			}
		case 3:
			{
				printf("Enter two numbers :");
				scanf("%d %d",&a,&b);
				c=a*b;
				printf("Multiplication=%d",c);
				break;
			}
	}
	
	
	
	
	
}
