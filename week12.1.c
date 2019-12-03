#include<stdio.h>
void main()
{
    FILE *f;
    char ch;
    f = fopen("filesample.txt","r");
    if (f == NULL)
    {
        printf("File does'nt exist");
    }
    else
    {
        while ((ch = fgetc(f))!= EOF)

       {
           
           printf("%c",ch);
       }
    }
    
    fclose(f);

}