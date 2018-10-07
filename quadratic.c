#include<stdio.h>
#include<math.h>
void main()
{

    float a,b,c,d;
    printf("enter the value in the form of ax**2+b*x+c:");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);

    // if d<0 then complex number
    if(d<0)
    {
        printf("%.1f+%.1fi\n",-b/2*a,sqrt(-d)/2*a); //x*x+4*x+5
        printf("%.1f-%.1fi",-b/2*a,sqrt(-d)/2*a);

    }
    else if(d>0)
    {

        printf("%f\n",(-b+sqrt(d))/2*a); //ex:x*x-x-3
        printf("%f",(-b-sqrt(d))/2*a);

    }
    else
        printf("root1=root2=%f %f",-b/2*a,-b/2*a);
}
