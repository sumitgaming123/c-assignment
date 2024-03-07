#include<stdio.h>
#include<stdlib.h>

int main(int argc,  char*argv[])
{
int i;    
int a = atoi(argv[1]);
printf(" Multiplication table for %d \n", a);
for ( i = 1; i <= 10; i++)
{
    printf("%d * %d = %d \n", a, i, (a*i));
}
return 0;
}
