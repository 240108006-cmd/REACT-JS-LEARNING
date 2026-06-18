#include <stdio.h>
int main()
{
    int a = 5;
    int* pointer;
    pointer = & a;
    printf("%p\n",pointer);
    printf("%p",&a);
    return 0 ;
}
