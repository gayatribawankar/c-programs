//2. Create a structure to store an employee's ID, name, and salary, and write a program to print the details.
#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int salary;

};
void main(){
    int i;
    struct employee e[3];
    printf("enter info of student:");
    for(i=0;i<3;i++){
        printf("enter id:");
        scanf("%d",&e[i].id);
        printf("enter name:");
        scanf("%s",e[i].name);
        printf("enter salary:");
        scanf("%d",&e[i].salary);
    }
    printf("disply employee info:");
    for(i=0;i<3;i++){
        printf("id:%d\n",e[i].id);
        printf("name:%s\n",e[i].name);
        printf("salary:%d\n",e[i].salary);
    }
}
