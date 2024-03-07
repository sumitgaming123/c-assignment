// Write a program to calculate a Fibonacci series up to n numbers.
// Using Recursion.
#include<stdio.h>
int fib(int n); // Declare function

int main()
{
   printf("%d", fib(5)); // Calling Function
    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1){  // wkt the fib series start from 0 1 1 2.... and the lowest no is 0 and 1.
        if(n == 0){
            return 0;
        }                  // base condition
        if(n== 1){
            return 1;
        }
    }
  
    
    int fibNm1 =fib(n-1);
    int fibNm2 =fib(n-2);
    int fibN = fibNm1 + fibNm2; // Fibonacci Formula.
   // printf(" fib of %d is : %d \n", n, fibN);
    return fibN;
}