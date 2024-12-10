#include <stdio.h>
struct Book
{
    char title[20];
    char author[20];
    int price;
    int stock;
} book[3];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Title:");
        scanf("%s", book[i].title);
        printf("Author:");
        scanf("%s", book[i].author);
        printf("Price:");
        scanf("%d", &book[i].price);
        printf("Stock:");
        scanf("%d", &book[i].stock);
    }
    printf("Books\n");
    for (int i = 0; i < 3; i++)
    {
        if (book[i].stock > 10)
        {
            printf("\nTitle:%s\nAuthor:%s\nPrice:%d\nStock:%s", book[i].title, book[i].author, &book[i].price, &book[i].stock);
        }
    }

    return 0;
}