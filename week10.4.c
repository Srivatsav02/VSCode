#include<stdio.h>
void display();
void main()
{
    void (*fp)();
    fp = &display;
    (*fp)();

}
void display()
{
    printf("nike air mags");
}
