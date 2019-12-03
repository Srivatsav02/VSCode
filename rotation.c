#include<stdio.h>
int main()
{
    int i,r,a[5],t,j;
    printf("The number of rotations to be performed:");
    scanf("%d",&r);
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the element in the array:");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < r; i++)
    {
        j = 4;
        t = a[j];
        while (j)
        {
            a[j] = a[j-1];
            j--;
        }
        a[0] = t;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
}