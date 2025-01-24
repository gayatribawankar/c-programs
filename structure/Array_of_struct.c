//array of structure
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
};
void main(){
    int i;
    struct student s[3];
    printf("enter the information of students:");
    for(i=0;i<3;i++){
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter rollno:");
        scanf("%d",&s[i].rollno);
        printf("enter marks:");
        scanf("%d",&s[i].marks);
    }
    printf("display students info:");
    for(i=0;i<3;i++){
        printf("name:%s\n",s[i].name);
        printf("rollno:%d\n",s[i].rollno);
        printf("marks:%d\n",s[i].marks);
    }
}