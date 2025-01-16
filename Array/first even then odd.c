//write a c program to create new array from a given array of integers shifting all even numbers before odd numbers.
#include<stdio.h>
void main(){
    int a[6]={2,3,4,5,6,7};
    int newarray=[6]
    int k=0;
    for(int i=0; i<6; i++){
        if(a[i]%2==0){
            newarray[k]=a[i];
            k++;
        }
    }
    for(int i=0; i<6; i++){
        if(a[i]%2!=0){
            newarray[k]=a[i];
            k++;
        }
    }
    for(int k=0; k<6; k++){
        printf("%d",newarray[k]);
    }
}