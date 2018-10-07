#include<stdio.h>
void main()
{

    int n,i,flag,j;
    printf("enter n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=0;

        for(j=2;j<=i-1;j++)
        {

            if(i%j==0){
                flag=1;
                break;

            }

        }
       if(flag==0)
            printf("%d ",i);

    }

}
