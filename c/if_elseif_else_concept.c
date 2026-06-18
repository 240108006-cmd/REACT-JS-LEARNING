#include<stdio.h>
int main()
{
    int age ;
    printf("the age of person is ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("the person is adult\n");
        printf("the person can drive\n");
        printf("the person can vote\n");
    }
    else if ( age<18 && age > 13)
    {
        printf("the person is teenager\n");
    }
    else
    {
        printf("person is neither teenager nor adult\n");
    }
    printf("THE PROGRAM IS OVER\n");
    return 0;
}