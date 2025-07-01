#include<stdio.h>

    int sum(int , int);
    int sum(int x, int y){
        printf("The sum is %d ", x+y);
        return x+y;
    } 

int main(){
    


    sum(12,12);

    
    return 0;
}