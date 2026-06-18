#include <stdio.h>
int main()
{
    int a ;
    printf("the value of a is ");
    scanf("%d",&a);
    int first_digit=a/100, remainder= a%100 , second_digit= remainder/10 ,third_digit= remainder%10;
    printf("the sum of all digits are %d",first_digit+second_digit+third_digit);
    return 0;
    //program to find the sum of digits of a three digit number 
    // trick is three digit number hai toh divide karo use 100 se then 10 se 
    //usi hisab se progrm draw karo
}