#include<stdio.h>

int fibo(int );
int fibo(int n){
    if(n==1 || n==2){
    return (n-1);
    }
    return fibo(n-1)+fibo(n-2);

    

}

int main(){

    int n =5;
    printf("%d" , fibo(n));
    
    return 0;
}