#include<stdio.h>

      /*perfect number is a number which is equivalent to sum of its all factors*/

      /*To find the proper factors of a number,
      write down all numbers that divide the number with the exception of the number itself*/.
void main()
{

    int i,n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    //logic
    for(i=1;i<=n-1;i++)
    {
      if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        printf("\n%d is perfect number",n);
    else
        printf("it is not perfect number");
}
