#include<stdio.h>
int ref(int*);

int ref(int* c){
*c=10;
return *c;
}

int main(){

    int a=6;
    ref(&a);
    printf("The ref value is %d", a);

    
    return 0;
}