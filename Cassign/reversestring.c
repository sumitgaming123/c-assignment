#include<stdio.h>
#include<string.h>

int main()
{
    int i, n;
    char str[4] = "abcd";
    n = strlen(str);
//  n=4;
    printf("Reverse string is \n");
    for (i=n-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}