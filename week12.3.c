#include<stdio.h>
void main()
{
    FILE *f;
    int x=0,y=0,z=0;
    char a;
    f = fopen("filesample.txt","r");
    while ((a = fgetc(f))!= EOF)
    {
        x++;
        if (a == ' ')
        {
            y++;
        }
        if (a == '\n')
        {
            z++;
        }
        
    }
    printf("\nThe number of characters is %d",x-z);
    printf("\nThe number of words is %d",y+2);
    printf("\nThe number of lines is %d",z+1);
}