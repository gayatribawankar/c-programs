//3. Create an array of structures to store information of 5 books (title, author, price) and display them
#include<stdio.h>
struct books{
    char title[20];
    char author[20];
    int price;
};
void main(){
    int i;
    struct books b[5];
    printf("enter book info: ");
    for(i=0;i<5;i++){
        printf("enter title:");
        scanf("%s",b[i].title);
        printf("enter author:");
        scanf("%s",b[i].author);
        printf("enter price:");
        scanf("%d",&b[i].price);
    }
    printf("display the book info:");
    for(i=0;i<5;i++){
        printf("title:%s\n",b[i].title);
        printf("author:%s\n",b[i].author);
        printf("price:%d\n",b[i].price);
    }
}