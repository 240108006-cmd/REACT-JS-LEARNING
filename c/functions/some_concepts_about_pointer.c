#include<stdio.h>
int main()
{
    int a = 5 ;
    int* pointer= & a ;
    printf("%p\n",pointer);//value inside pointer = address of a 
    printf("%p\n",&pointer);// address of pointer 
    printf("%d\n",*pointer);// pointer ke andar jis bhi variable ka address store hai us variable ki value 
    return 0 ;
}