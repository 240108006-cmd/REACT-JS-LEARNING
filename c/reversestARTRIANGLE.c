#include<stdio.h>
int main()
{
    char ch; 
    int n;
    printf("the character is");
    scanf("%c",&ch);
    printf("the rows is");
    scanf("%d",&n);
    for (int x =n; x>=1;x=x-1)
    {
        for (int y=x;y>=1;y=y-1)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0 ;
}