#include <stdio.h>
int main()
{
    int n,i,j,num,sum;
    printf("Enter Limit: ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        num=a[i];
        sum=0;

        for(j=1; j<num; j++)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==num)
        {
            printf("%d\t", a[i]);  
        }
    }
}
