#include<stdio.h>
void main()
{
    FILE *f1;
    FILE *f2;
    f1 = fopen("filesample.txt","r");
    f2 = fopen("filetarget.txt","w");
    char c;
    while ((c = fgetc(f1))!= EOF)
    {
        fputc(c,f2);
    }
    fclose(f1);
    fclose(f2);
}