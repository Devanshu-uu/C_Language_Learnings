#include<stdio.h>

int main(){
    int r;
    printf("Enter Radius: ");
    scanf("%d",&r);
    int h;
    printf("Enter Height: ");
    scanf("%d",&h);
    printf("The Area Of Circle With Radius %d Is: %f\n",r ,3.14*r*r);
    printf("The Volume Of Cyclinder With Radius %d And Height %d Is: %f",r, h,3.14*r*r*h);
    return 0;
}