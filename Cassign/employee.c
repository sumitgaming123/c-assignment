#include<stdio.h>

struct Employee
{
 char str[20];
 char str1[30];
 double salary;   
};

int main(void)
{
    struct Employee e1; //e1 is a variable of type struct Employee
    printf("Enter employee first name : ");
    scanf("%s",e1.str);
    printf("Enter Employee last name : ");
    scanf("%s",&e1.str1);
    printf("Enter Employee salary : ");
    scanf("%lf",&e1.salary);
    printf("\n  first Name = %s\n lastname = %s\n Salary = %lf",e1.str,e1.str1,e1.salary);
    return 0;
}