//1. Define a structure to store student details (name, age, and marks), take input from the user, and display the details.
//array of structure
#include<stdio.h>
struct student{
    char name[20];
    int age;
    int marks;
};
void main(){
    int i;
    struct student s[3];
    printf("enter the information of students:");
    for(i=0;i<3;i++){
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter age:");
        scanf("%d",&s[i].age);
        printf("enter marks:");
        scanf("%d",&s[i].marks);
    }
    printf("display students info:");
    for(i=0;i<3;i++){
        printf("name:%s\n",s[i].name);
        printf("age:%d\n",s[i].age);
        printf("marks:%d\n",s[i].marks);
    }
}
