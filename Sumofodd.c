#include<stdio.h>
void main()
{
    int n,i,sumofodd=0,sumofeven=0;
    printf("enter limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     if(i%2==0)
     {
        sumofeven=sumofeven+i;
     }
     else{
        sumofodd=sumofodd+i;
     }

    }
    printf("sumofodd:%d",sumofodd);
     printf("sumofeven:%d",sumofeven);

}

