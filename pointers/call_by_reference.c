#include<stdio.h>
int sum(int*, int*);
int sum(int* a , int* b){
    *a=1;
    return *a+*b;

}
int main(){
    int x=4 , y=4;
    printf("The sum of %d and  %d  is %d\n", x ,  y, sum(&x,&y));
    printf("The value is x is %d", x);

    return 0;
}