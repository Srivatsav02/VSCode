#include<stdio.h>
struct book
{
    char name[10];
    char author[10];
    int pages;
    int price;
};
void main()
{
    struct book b1;
    struct book *p;
    p = &b1;
    printf("Enter the details of book 1:\n");
    scanf("%s %s %d %d",&b1.name,&b1.author,&b1.pages,&b1.price);
    printf("\n%s %s %d %d",p->name,p->author,p->pages,p->price);
}   