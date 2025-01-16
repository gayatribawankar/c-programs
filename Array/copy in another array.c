//Q.8 Write a program in C to copy the elements of one array into another array.
// #include<stdio.h>
// void main(){
//     int a[4]={3,5,7,4},b[4];
//     for(int i=0; i<4; i++){
//         b[i]=a[i];
//     }
//     for (int i=0; i<4; i++){
//         printf("%d",b[i]);
//     }
// }


//cube
#include<stdio.h>
void main(){
    int a[4]={3,5,7,4},b[4];
    for(int i=0; i<4; i++){
        b[i]=a[i]*a[i]*a[i];
    }
    for (int i=0; i<4; i++){
        printf("%d\n",b[i]);
    }
}
