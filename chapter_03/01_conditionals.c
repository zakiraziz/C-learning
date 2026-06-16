#include <stdio.h>

int main(){
    int age = 16;
    
    if(age>10){
        printf("You are older than 10.\n");
        printf("You can drive a car.\n");
    }
    if(age%5==0){
        printf("You are a multiple of 5.\n");
        printf("You can drive a car.\n");
    }
    return 0;
}