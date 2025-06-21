#include<stdio.h>

int main(){
    int C;
    printf("Enter Temp of Celcuis:");
    scanf("%d",&C);
    printf("The %d Celcius to Fahrenheit is: %.1f ",C ,(9.0/5.0)*C+32);
    return 0;
}