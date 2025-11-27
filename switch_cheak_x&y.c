#include<stdio.h>
int main()
{
	int x,y,ch;
	printf("Press 1 :Equality :");
	printf("\n Press 2:Less Than :");
	printf("\n Press 3:Quotient and Remainder :");
	printf("\n Enter Your Choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				printf("Enter value of x and y :");
				scanf("%d %d",&x,&y);
				if(x==y)
				  printf("x is equal to y");
				else
				  printf("x is not equal to y");
				break;
			}
		case 2:
			{
			   printf("Enter value of x and y :");
			   scanf("%d %d",&x,&y);
			   if(x<y)
			     printf("x is Less Than y");
			   else
			     printf("x is not Less Than y");
			   break;	
			}
		case 3:
			{
				printf("Enter value of x and y :");
				scanf("%d %d",&x,&y);
				printf("Q=%d",x/y);
				printf("R=%d",x%y);
				break;
			}
		default:
			{
				printf("Invalid Choice");
			}
		
	}
}

