#include<stdio.h>

int address(int*);
int address(int*  ptr){
printf("The value of a is %d \n" , *ptr);
printf("The address of a is %p \n" , ptr);


    return 5 ;
}

int main(){

    int i=6;
    int ptr=&i;
    address(ptr);
    printf("The address of a is %p \n" , &i);

    

    
    return 0;
}