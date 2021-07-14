#include<stdio.h>
int main()
{
    struct book
    {
        char title[80];
        char author[80];
        float price;
        int pages;
        char date[80];
    };
    struct book b[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the details of Book %d : ",(i+1));
        printf("\nBook Title:");
        scanf("%s", b[i].title);
        printf("Author Name:");
        scanf("%s", b[i].author);
        printf("Price:");
        scanf("%f", &b[i].price);
        printf("Number of Pages:");
        scanf("%d", &b[i].pages);
        printf("Date of Publication:");
        scanf("%s", b[i].date);
    }
    float highest=b[0].price;
    int x;
    for(int i=0;i<3;i++)
    {
        if(b[i].price>highest)
        {
            x=i;
        }
    }
    printf("\nDetails of highest priced book: Book %d",(x+1) );
    printf("\nBook Title = %s", b[x].title);
    printf("\nBook Author = %s", b[x].author);
    printf("\nPrice= %f", b[x].price);
    printf("\nNumber of Pages = %d", b[x].pages);
    printf("\nDate of Publication = %s", b[x].date);
    return 0;
}
