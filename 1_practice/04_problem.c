#include<stdio.h>

int main(){
    float p;
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    int r;
    printf("Enter Rate Of Interest: ");
    scanf("%d",&r);
    int t;
    printf("Enter Time : ");
    scanf("%d",&t);

    printf("Your Simple Interest Is: %.2f",(p*r*t)/100);

    return 0;
}