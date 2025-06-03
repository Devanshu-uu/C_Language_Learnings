#include<stdio.h>

int main(){
    int a=1; int b=0;
    printf("The value of a and b is %d \n" ,a&&b);
    printf("The value of a and b is %d \n" ,a||b);
    printf("The value of not(a) is %d \n", !a);


    int ab=1; int ba=1;
    printf("The value of a and b is %d \n" ,ab&&ba);
    printf("The value of a and b is %d \n" ,ab||ba);


    int aa=0; int bb=0;
    printf("The value of a and b is %d \n" ,aa&&bb);
    printf("The value of a and b is %d \n" ,aa||bb);

    return 0;
}