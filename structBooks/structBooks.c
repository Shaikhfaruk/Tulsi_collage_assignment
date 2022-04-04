#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books book1;
    struct Books book2;
    strcpy(book1.title, "Learn Javascript With Shaikh");
    strcpy(book1.author, "Shaikh Faruk");
    strcpy(book1.subject, "Javascript");
    book1.book_id = 1828;

    strcpy(book2.title, "Learn Javascript With Shaikh");
    strcpy(book2.author, "Shaikh Faruk");
    strcpy(book2.subject, "Javascript");
    book2.book_id = 1828;

    printf("\nBook Title: %s", book1.title);
    printf("\nBook Author: %s", book1.author);
    printf("\nBook Subject: %s", book1.subject);
    printf("\nBook Id: %d \n", book1.book_id);

    printf("\nBook Title: %s", book2.title);
    printf("\nBook Author: %s", book2.author);
    printf("\nBook Subject: %s", book2.subject);
    printf("\nBook Id: %d \n", book2.book_id);

    return 0;
}
