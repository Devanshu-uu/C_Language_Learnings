#include<stdio.h>

int main(){
    int year;
    printf("Enter Your Year:\n");
    scanf("%d",&year);


    if((year %4 ==0 && year%100!=0) || year %400==0)
        printf("It is a Leap Year" );


    else
        printf("It is not a leap year");

    return 0;
}