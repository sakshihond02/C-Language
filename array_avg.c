#include<stdio.h>
int main()
{
  int n,i,sum=0; 
  float avg;
  printf("Enter Limit :");
  scanf("%d",&n);
  int a[n];
  for(i=0; i<n; i++)
  {
  	printf("Enter Elements :");
  	scanf("%d",&a[i]);
  }
  for(i=0; i<n; i++)
  {
  	sum=sum+a[i];
  }
  avg=sum/n;
  printf("avg all elements=%f",avg); 	
}
