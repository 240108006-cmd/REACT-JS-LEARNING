#include<stdio.h>
int main()
{
    int rows , columns ;
    printf("the number of rows ");
    scanf("%d",&rows);
    printf("the number of columns ");
    scanf("%d",&columns);
    for (int x=1;x<=rows;x=x+1)
    {
        for (int y=1;y<=columns;y=y+1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}