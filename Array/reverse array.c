//Write a program in C to read n number of values in an array and display them in reverse order.
#include<stdio.h>
void main(){
    int arr[5]={3,7,5,6,1};
    for (int i=1; i<=5; i++){
        printf("%d\n",i);
        }
        for (int j=5; j>=1; j--){
            printf("%d\n",j);
        }
}
