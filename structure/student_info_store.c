#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
};
void main(){
    struct student s1;
    

printf("enter details:");
printf("enter name");
scanf("%s",s1.name);
printf("enter rollno:");
scanf("%d",&s1.rollno);
printf("enter marks:");
scanf("%d",&s1.marks);

printf("display student information");
printf("name:%s\n",s1.name);
printf("rollno:%d\n",s1.rollno);
printf("marks:%d\n",s1.marks);


struct student s2;
printf("enter details:");
printf("enter name");
scanf("%s",s2.name);
printf("enter rollno:");
scanf("%d",&s2.rollno);
printf("enter marks:");
scanf("%d",&s2.marks);

printf("display student information");
printf("name:%s\n",s2.name);
printf("rollno:%d\n",s2.rollno);
printf("marks:%d\n",s2.marks);
}