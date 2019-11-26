#include<stdio.h>
int main()
{
    int i = 10;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf("\n%d",i);
    printf("\n%d",&i);
    printf("\n%d",j);
    printf("\n%d",*j);
    printf("\n%d",&j);
    printf("\n%d",k);
    printf("\n%d",&k);
    printf("\n%d",*k);
    printf("\n%d",**k);
}