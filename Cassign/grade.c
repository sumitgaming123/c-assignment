// Write a program to calculate grade of a student.
// using if-else.

#include<stdio.h>
int main()
{
    int marks;
    printf(" Enter a marks: ");
    scanf("%d", &marks);

    if (marks>=90)
    {
        printf(" Grade is EX");
    }
    else if(marks<=90 && marks>80 )
    {
        printf(" Grade is A");
        
    }
    else if(marks<=80 && marks>70)
    {
        printf(" Grade is B");
    }
    else if(marks<=70 && marks>60)
    {
        printf(" Grade is C");

    }
    else
    {
        printf(" Grade is F");
    }
    return 0;
}