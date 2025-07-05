#include<stdio.h>
void swap(int* ,int* );
int temp;
void swap(int* a,  int* b ){
temp=*a;
*a=*b;
*b=temp;

}

int main(){
    int a = 1, b=2;

    swap(&a,&b);
    printf("The value of a is %d and b is %d now values are swap are \n", a , b );
    
    return 0;
}