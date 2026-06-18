#include<stdio.h>
void newzealand()
{
    printf("yo are in newzealand \n");
    printf("_______________________________");
    return;
}
void australia()
{
    printf("yo are in australia \n");
    newzealand();
    return;
}
void india()
{
    printf("yo are in india \n");
    australia();
    return;
}
int main()
{
    india();
    return 0 ;
}