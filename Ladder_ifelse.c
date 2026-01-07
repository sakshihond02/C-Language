#include<stdio.h>
int main()
{
	float per;
	char grade;
	printf("Enter Percentage :");
	scanf("%f",&per);
	if(per>=35 && per<=40)
	   grade='D';
	else if(per>40 && per<=60)
	   grade='C';
	else if(per>60 && per<=70)
	   grade='B';
	else if(per>70 && per<=80)
	   grade='A';
	else if(per>80 && per<=100)
	   grade='O';
	else
	   grade='F';
	printf("\n Percentage=%f",per);
	printf("\n Grade=%c",grade);
}
