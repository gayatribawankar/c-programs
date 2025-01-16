//Q.9 Write a program in C to minimum element.
#include<stdio.h>
void main(){
    int a[3]={1,5,8},i,min=a[0];
    for(i=0; i<3; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
        printf("%d",min);
    }
