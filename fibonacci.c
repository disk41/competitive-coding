#include<stdio.h>
 
int fib(unsigned long long n){
   int first = 0, second = 1, next, c;
 
   printf("Enter the number of terms\n");
   scanf("%lld",&n);
 
   printf("First %lld terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%lld\n",next);
   }
}
   
   
int main(){
    int f;
    fib(f);
    return 0;
}
 
 
