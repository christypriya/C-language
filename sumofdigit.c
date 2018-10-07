#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    1
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
}
