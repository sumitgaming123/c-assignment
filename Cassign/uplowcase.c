/* #include<stdio.h>
int main()
{
    char ch;
    printf(" Enter a character: ");
    scanf("%c", &ch);

    if (ch>= 'A' && ch<='Z' )
    {
        printf(" UPPERCASE");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("LOWERCASE");
    }

    else if (ch>= '0' && ch<= '9' )
    {
        printf(" %c is digit", ch);
    }
    else
    {
       printf(" %c is not digit", ch);
    }
    
    
    return 0;
}
*/

#include<stdio.h>
int main()
{
    char ch;
    printf(" Enter a character: ");
    scanf("%c", &ch);

    if((int)ch >=65 && (int)ch<=90) 
      printf("Uppercase"); 
 else if((int)ch >=97 && (int)ch<=122) 
      printf("Lowercase"); 
 return 0; 
}
/*
    else if (a>= '0' && a<= '9' )
    {
        printf(" %c is digit", a);
    }
    else
    {
       printf(" %c is not digit", a);
    }
    
    
    return 0;
}
*/