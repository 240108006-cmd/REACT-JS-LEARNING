#include<stdio.h>
int main()
{
    float marks ;
    printf("the marks of student are ");
    scanf ("%f",&marks);
    if (marks>=90 && marks<=100)
    {
        printf("A+");
    }
    else if (marks>=70 && marks < 90)
    {
        printf("A");
    }
    else if (marks>=30 && marks<70)
    {
        printf("B");
    }
    else 
    {
        printf("C");
    }
    return 0 ;
}