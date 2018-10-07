#include<stdio.h>
#include<math.h>


/* A number a is an Armstrong Number
    or narcissistic number if it is equal to the sum of its own digits
    raised to the power of the number of digits. */
    //eg:371


void main ()
{

    int sum=0,cube=0,temp,n,rem,count=0,value;
    printf("enter number:");
    scanf("%d",&n);
    value=temp=n;

    while(temp!=0){
        count++;
        temp=temp/10;                //to find no.of digit in the number
    }

    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+pow(rem,count);

    }
    if(value==sum)
        printf("\ngiven number %d is amstrong number",value);
    else
        printf("not an amstrong number");
}
