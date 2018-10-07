#include<stdio.h>
void main()
{
    int i,n,rem,flag=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
            {
               flag=1;
               break;

            }
    }
    //result
    if(flag==1)
        printf("%d is not prime",n);

    else
        printf("%d is  prime number",n);
}
