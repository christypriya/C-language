#include<stdio.h>
int factorial(int);
void main()
{

    int n,fact;
    printf("enter n:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
}
int factorial(int n)
{
  int fact;
  if(n==1||n==0)
    return 1;
  else
  fact=n*factorial(n-1);
  return fact;

}
