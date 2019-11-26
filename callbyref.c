#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a = 10;
    int b = 20;
    printf("The numbers before swapping are %d and %d",a,b);
    swap(&a,&b);
    printf("\nThe numbers after swapping are %d and %d",a,b);
}
void swap(int*a,int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}