#include<stdio.h>
#include<stdlib.h>

int main(int argc,  char*argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    if (a>b && a>c)
    {
        printf("MAX a");
    }
    else if (b>a && b>c)
    {
        printf("MAX b");
    }
    else
    {
        printf("MAX c");
    }
    return 0;
}

