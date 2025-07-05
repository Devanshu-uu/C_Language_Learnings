#include<stdio.h>
int sum(int, int);
int sum(int a , int b){
    return a+b;

}
int main(){
    int x=4 , y=5;
    printf("The sum of %d and  %d  is %d", x ,  y, sum(x,y));
    return 0;
}