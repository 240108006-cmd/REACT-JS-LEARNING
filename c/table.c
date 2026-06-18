#include<stdio.h>
float calculate_area(radius)
{
    return 3.14*radius*radius ;
}
int main ()
{
    float radius,pi=22/7;
    printf("the radius of circle is ");
    scanf("%f",&radius);
    area= calculate_area(radius);
    printf("%f",area);
    return 0 ;
}


   