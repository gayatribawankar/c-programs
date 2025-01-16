//3 Display the sum of first 10 natural numbers

#include<stdio.h>
void main(){
    int i=1,sum=0;
    
    while(i<=10){
        printf("%d",i);
        sum=sum+i;
        
        i++;
    }
       printf("sum of natural num is %d",sum);
    
}
