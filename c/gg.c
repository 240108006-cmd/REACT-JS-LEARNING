#include <stdio.h>
int main ()
{
    int num,a,first_digit,second_digit,third_digit ;
    printf("the value of num is ");
    scanf ("%d",&num);
    first_digit= num/100;
    a= num%100;
    second_digit= a/10;
    third_digit = a%10;
    if (num == 100*third_digit+10*second_digit+first_digit)
    {
    //    printf("the num is palindrome");
    }
    else
    {
        printf("the num is not palindrome ");
    }
    return 0 ;
}