// take float input and print the fractional part of the number 
#include <stdio.h>
int main()
{
    float a;
    printf("the value of a is ");
    scanf("%f",&a);
    int z= a;
    printf("the fractional part of the number is %f", a-z);
    return 0;
}