#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	
	if(ch>='0' && ch<='9')
	  printf("Character is digit");
	else
	  printf("Character is not digit");
}
