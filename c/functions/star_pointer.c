#include<stdio.h>
int main()
{
    int a = 5;
    int* x = &a ;
    printf("%p\n",x);
    printf("%p\n",&a);
    printf("%d\n",*x);
    *x = 100; // *x ka means hta hai ki pointer me jis variable ka address store hai , us variable ki value 
    // is case me hum us variable ki value ko 100 ke equal karke uss value ko change kar rahe hai 
    printf("%p\n",x);
    printf("%p\n",&a);
    printf("%d\n",*x);
    return 0 ;
}