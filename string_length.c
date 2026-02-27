#include<stdio.h>
int main()
{
	int i,cnt=0;
	char s1[20];
	printf("Enter String :");
	gets(s1);
	for(i=0; s1[i]>'\0'; i++)
	{
		cnt++;
	}
	printf("Length Of String=%d",cnt);
}
