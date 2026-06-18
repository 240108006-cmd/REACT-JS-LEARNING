#include<stdio.h>
int main()
{
    char a;
    printf("the character is ");
    scanf("%c",&a);
    for (int x = 1;x<=3;x=x+1)
    {
        for (int x =1; x<=5;x=x+1)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0 ;
}