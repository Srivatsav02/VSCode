#include<stdio.h>
int main()
{
    int a[5],*p[5],i;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        p[i] = &a[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\nThe address of %d is %d",a[i],p[i]);
    }
    
}