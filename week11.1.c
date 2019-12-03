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
    struct book b1,b2,b3;
    printf("Enter the details of book 1:\n");
    scanf("%s %s %d %d",&b1.name,&b1.author,&b1.pages,&b1.price);
    printf("\nEnter the details of second book:\n");
    scanf("%s %s %d %d",&b2.name,&b2.author,&b2.pages,&b2.price);
    printf("\nEnter the details of third book:\n");
    scanf("%s %s %d %d",&b3.name,&b3.author,&b3.pages,&b3.price);
    printf("\n%s %s %d %d",b1.name,b1.author,b1.pages,b1.price);
    printf("\n%s %s %d %d",b2.name,b2.author,b2.pages,b2.price);
    printf("\n%s %s %d %d",b3.name,b3.author,b3.pages,b3.price);
}