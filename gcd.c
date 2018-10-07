#include<stdio.h>
void main()
//Euclid's Algorithm:divide the given numbers until rem=0 and the last divisor is our gcd
//gcd-greatest number which divides both numbers
//lcm-smallest number which is divisible by both numbers
//eg 36, 60
{

    int a,b,rem,lcm,a1,b1;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    a1=a,b1=b;
    do
    {
        rem=a%b;
        a=b;
        b=rem;
    }while(rem!=0);
    printf("gcd=%d",a);
    lcm=(a1*b1)/a;//lcm(a,b)=(a*b)/gcd(a,b)
    printf("\nlcm=%d",lcm);

}
