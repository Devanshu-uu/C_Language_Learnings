#include<stdio.h>

    int* sum(int ,int);
    int* sum(int a , int b){
        int sum=a+b;
        int* ptr =&sum;
        printf("The sum is %d\n",sum);
        return ptr;
        
    }
    float* avg(int ,int);
    float* avg(int a , int b){
        float avg=(a+b)/2.00;
        float* ptr =&avg;
        printf("The sum is %.1f\n",avg);
        return ptr;
        

    }

int main(){


    int x=3;
    int y=7;
    float*  ptr2;
    int*  ptr1;

    ptr1 = sum(x,y);
    ptr2 = avg(x,y);
 
    printf("The address of sum is %u and avg is %u\n", ptr1 , ptr2);


    return 0;
}