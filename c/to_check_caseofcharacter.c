#include<stdio.h>
int main()
{
    char character ;
    printf("the given character is ");
    scanf("%c",&character);
    if (character>='a'&& character<='z')
    {
        printf("lower");
    }
    else if (character>='A'&& character<='Z')
    {
        printf("UPPER");
    }
    else 
    {
        printf("character is not alphabate");
    }
    return 0 ;
}