#include<stdio.h>
int main()
{
  
  int j,sum=0;
  printf("The first ten numbers are:\n");
  for(j=0; j<=10; j++)
    {
        printf("%d",j);
    }
    sum=sum+j;
    printf("The sum is %d",sum);
}