#include<stdio.h>
int main()
{  
    int a ; 
    printf("the value of a is ");
    scanf("%d",&a);
    int* pointer = &a;
    int** pointerr = & pointer ;
    printf("%p\n",pointer);
    printf("%p\n",pointerr);
    printf("%d\n",*pointer);
    printf("%d\n",**pointerr);
    return 0 ;
}