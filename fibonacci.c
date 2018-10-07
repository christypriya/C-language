//fibonacci series

#include<stdio.h>
void main()
{
    int a=0,b=1,c,i,n;
    printf("enter no.of terms that you want to print :");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=0;i<n-2;i++)
    {   c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}
