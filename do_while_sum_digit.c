#include<stdio.h>
int main()
{
    int num,d,sum=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    do
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }while(num>0);
    printf("Sum of digits=%d",sum);
}

