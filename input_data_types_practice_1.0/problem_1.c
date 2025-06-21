#include<stdio.h>

int main(){
    int length;
    printf("Enter length: ");
    scanf("%d",&length);
    int breadth;
    printf("Enter Breadth: ");
    scanf("%d",&breadth);
    printf("The area of this rectangle is: %d",length*breadth);
    
    return 0;
}