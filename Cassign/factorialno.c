// Write a program to calculate a Factorial of a number.

#include<stdio.h>
int fact(int n); // Declare the functon.

int main()
{
    printf("factorial is %d", fact(3)); // Calling Function.
    return 0;
}

int fact(int n)
{
    
   if (n==0)  // Base case
   {
    return 1;
   }
   else
   {
     
    return n * fact(n-1); // factorial formuls is = fact(n-1)*n.
   }
   
}

// using Functon.

/* #include<stdio.h>
int fact(int n);  // Function Declaration

int main()
{
    printf("factorial is %d", fact(5));  // Function Calling
    return 0;
}

int fact(int n)
{
    int res=1;         // Function Defination.
    int i;
    for(i=1; i<=n; i++)
    res = res*i;
    return res;
}
*/
