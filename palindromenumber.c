#include<stdio.h>
void main()    /* A number is said to be palindrome if it is remain itself even if it's reversed*/
{

    int n,rev=0,temp,rem;

    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {

        rem=n%10;

        n=n/10;

        rev=rev*10+rem;//logic
    }
    if(rev==temp)
        printf("\n %d is palindrome number",temp);
    else
        printf("number is not palindrome");
}
