#include <stdio.h>
int main()
{
    int n,i,num,num1,sum=0,d;
    printf("Enter Limit: ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        num=a[i];
        num1=num;
        sum=0;
        while(num>0)
        {
            d=num%10;
            sum=sum+d*d*d;
            num=num/10;  
        }
		if(sum==num1)
        {
            printf("%d\t", a[i]);
        }
    }    
}
