#include<stdio.h>
void main()
{
    int fact=1,i,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
