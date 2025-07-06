#include<stdio.h>

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr= array;
    
    printf("The value at address %u is %d",ptr+3,*(ptr+3));
    return 0;
}