// take two numbers as input a and b , a>b and find the remainder when a is divided by b(METHOD 1) 
#include <stdio.h>
int main()
{
    int a,b;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    int z= a/b;
    printf("the remainder will be %d",a-b*z);
    return 0 ;
}

// take two numbers as input a and b , a>b and find the remainder when a is divided by b(METHOD 2)
 #include <stdio.h>
int main()
{
    int a,b;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    int z= a%b;
    printf("the remainder will be %d",z);
    return 0 ;
}
