#include<stdio.h>
int main ()
{
    int i=5;
    printf("%d\n",i);
    printf("%d\n",i++);// first print then increase(post increment)
    printf("%d\n",++i);// first increase then print(pre increment)
    printf("%d\n",i--);// first print then increase(post decrement)
    printf("%d\n",--i);// first decrease then print(pre decrement)
    return 0 ;
}