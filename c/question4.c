# include <stdio.h>
int main()
{
    int number,modulus,remainder,reversednumber ;
    printf("the number is ");
    scanf("%d",&number);
    modulus= number/10;
    remainder = number %10;
    reversednumber = 10 *remainder + modulus ;
    if (number == reversednumber)
    {
        printf("the number is palindrome \n");
    }
    else 
    {
        printf("the number is not palindrome \n");
    }
    return 0 ;
}