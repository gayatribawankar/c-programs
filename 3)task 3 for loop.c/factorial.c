//calculate the factoril of given number 5
#include<stdio.h>
void main(){
    int number=5;
    int factorial=1;
    for(int i=1; i<=number; i++){
    factorial*=i;
    }
    printf("the factorial of %d is = %d\n",number,factorial);

}