#include<stdio.h>
int main()
{
   char ch;
   printf("Enter Character :");
   scanf("%c",&ch);
   if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
   {
   	  printf("It is Alphabet");
   	  printf("\n ASCII value of character=%d",ch);
   }
   else
    printf("It is not Alphabet");
}
