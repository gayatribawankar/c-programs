/*Q7.write a program in c to print 
EDCBA
EDCBA
EDCBA
EDCBA*/
#include<stdio.h>
void main(){
    
    char i,j;
    for(i='E'; i>='A'; i--){
        for(j='E'; j>='A'; j--){
            
            printf("%c",j);
            
        }printf("\n");
    }
}
