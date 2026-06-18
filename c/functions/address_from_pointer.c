# include<stdio.h>
int main()
{
    int a = 5;
    int* pointer= &a;
    printf("%p\n",pointer) ;
    int *adress_of_pointer= &pointer;
    printf("%p",adress_of_pointer);
    return 0 ;
}
// pointer ya direct address print krne ke liye 
// %p use hota hai 