#include<stdio.h>
int main()
{
    char ch ;
    printf("the character is ");
    scanf("%c",&ch);
    for (int x=1;x<=4;x=x+1)
    {
        for(int y = 1;y<=x;y=y+1)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0 ;
}