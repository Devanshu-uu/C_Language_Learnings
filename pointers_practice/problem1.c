#include<stdio.h>


int main(){

    int a=6;
    int* b=&a;

    printf("The address of a is %p \n" , &a);
    printf("The address of a is %p \n" , b);
    printf("The value of a is %d \n" , a);
    printf("The value of a is %d \n" , *b);


    
    return 0;
}