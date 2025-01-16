#include<stdio.h>
void main(){
    int a[3];
    printf("enter Array element;");
    for(int i=0; i<3; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<3; i++){
        printf("%d",a[i]);
    }

}