#include<stdio.h>
int main()
{
    int a[10],*p,i;
    p = a;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the number:");
        scanf("%d",&p+i);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("\n%d",*p);
        p++;
    }
    
    
}