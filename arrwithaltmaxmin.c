#include<stdio.h>
int sorting(int[],int);
void main()
{

    int a[10],i,n,j;
    printf("enter no.of elements:");
    scanf("%d",&n);
    for(i=0;i,i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
            {

                if(a[i]>a[j])
                {
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                }
            }
    }
    for(i=0;i,i<n;i++)
        printf("%d ",a[i]);
    sorting(a,n);
       //to print sorted array
for(i=0;i,i<n;i++)
        printf("%d ",a[i]);
}
int sorting(int c[],int n)
{
    int flag=0,k,j,i,b[10];
    i=0;
    j=n-1;
    for(k=0;k<n;k++)
    {
        if(flag==0)
            b[k]=c[j--];
        else
            b[k]=c[i++];
        flag=!flag;
    }
    for(i=0;i<n;i++)
        c[i]=b[i];
}
