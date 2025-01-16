#include<stdio.h>
void main(){
    int a[5]={1,0,8,0,5};
    int newArray[5],k=0;
    for(int i=0; i<5; i++){
        if(a[i]==0){
            newArray[k]=a[i];
            k++;
        }
    }
    for(int i=0; i<5; i++){
            if(a[i]!=0){
                newArray[k]=a[i];
            k++;
        }
    }
        for(k=0; k<5; k++){
            printf("%d",newArray[k]);

        }
        
    }

