#include<stdio.h>
int sum_n(int);
int sum_n(int n){
    if(n==1){
        return 1;

    }
    return sum_n(n-1) + n;
}
int main(){
    int n=3;
    printf("%d", sum_n(n));
    return 0;
}