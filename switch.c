#include<stdio.h>
int main()
{
	int ch,ans,a,b;
	printf(" Press 1 :Addition");
	printf("\n Press 2 :Substraction");
	printf("\n Press 3 :Multiplication");
	printf("\n Press 4 :Division");
	printf("\n Enter Your Choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				printf("Enter Two Numbers :");
				scanf("%d %d",&a,&b);
				ans=a+b;
				printf("Addition=%d",ans);
				break;
			}
		case 2:
		    {
		        printf("Enter Two Numbers :");
				scanf("%d %d",&a,&b);
				ans=a-b;
				printf("Substraction=%d",ans);
				break;	
			}
		case 3:
		    {
		        printf("Enter Two Numbers :");
				scanf("%d %d",&a,&b);
				ans=a*b;
				printf("Multiplication=%d",ans);
				break;	
			}
		case 4:
		    {
			    printf("Enter Two Numbers :");
			    scanf("%d %d",&a,&b);
			    ans=a/b;
			    printf("Division=%d",ans);
			    break;
			}
		default:
		    {
		       printf("Enter Valid Choice...!");	
			}		
	}
}
