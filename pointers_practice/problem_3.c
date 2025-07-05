#include<stdio.h>
int ten_times(int* );
int a;
int ten_times(int* a){
printf("Ten times of i is %d", *a*10);
return *a*10;
}



int main(){
    int i=9;
    printf("The value of i is %d\n", i);
    ten_times(&i);


    
    return 0;
}