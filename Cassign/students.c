#include<stdio.h>
struct Student
{
    //data members
    char name;
    int rn;
    int marks;
   
};
int main(void)
{
    struct Student s1;
   /* printf("\n Enter the student record");
    printf("\n Enter name : ");
    scanf("%c",&s1.name);

    printf("\n Enter RollNo : ");
    scanf("%d",&s1.rn);

    printf("\n Enter Marks : ");
    scanf("%d",&s1.marks);
    */

    s1.name='G';
    s1.rn=10;
    s1.marks =90;
    printf("S1 Record %c %d %d",s1.name,s1.rn,s1.marks);

    return 0;
}