#include<stdio.h>
#include<stdlib.h>
int main(int c, char *v[])
{
    int k;
    FILE *f;
    char ch;
    f = fopen(v[1],"r");
    k = atoi(v[2]);
  /*  for ( i = 1; i <= k; i++)
    {
        fseek(f,-i,2);
        printf("%c",fgetc(f));
    }*/
    fseek(f,-k,2);
    while((ch=fgetc(f))!=EOF)
    printf("%c",ch);
}
