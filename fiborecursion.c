#include<stdio.h>

int Fibonacci(int);

int main()
{
   int n, i=0,c ;
   printf("enter n terms:");
   scanf("%d",&n);
   printf("Fibonacci series\n");
   for ( c = 0; c< n ; c++ ) //Notice here you should not use the same variable for both index and parameter
   {
      printf("%d\n", Fibonacci(i));
      i++;
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
