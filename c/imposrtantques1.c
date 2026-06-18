#include<stdio.h>
int main()
{
    char character;
    printf("the given character is ");
    scanf("%c",&character);
    if (character=='A'||character=='E'||character=='I'||character=='O'||character=='U'||character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
    {
        printf("the character is vowel");
    }
    else
    {
        printf("the character is consonant ");
    }
    return 0 ;
}