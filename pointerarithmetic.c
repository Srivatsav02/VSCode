#include<stdio.h>
int main()
{
    int a=2,b=2,*p,*q;
    p = &a;
    q = &b;
    printf("\n%d",p);
    printf("\n%d",p+1);
    printf("\n%d",p-1);
    printf("\n%d",sizeof(int));
    if (p==q)
    {
        printf("they are same");
    }
    
}
    
