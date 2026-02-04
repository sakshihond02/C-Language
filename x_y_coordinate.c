#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	if(x>0 && y>0)
	  printf("First Quadrant");
	else if(x<0 && y>0)
	  printf("Second Quadrant");
	else if(x<0 && y<0)
	  printf("Third Quadrant");
	else if(x>0 && y<0)
	  printf("Fourth Quadrand");
}
