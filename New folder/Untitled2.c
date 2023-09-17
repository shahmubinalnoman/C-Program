#include<stdio.h>
int main()
{
    int n,sum=0,a=1;
    printf("Enter the last number of the series; ");
    scanf("%d", &n);
    printf("1+3+..........+ %d",n);

    while(a<=n)
    {
        sum+=a;
        a+=2;
    }
    printf("=%d", sum);
    }
