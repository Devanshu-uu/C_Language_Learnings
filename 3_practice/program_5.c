#include<stdio.h>

int main(){
    
    int a,b,c,d;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Enter a number: ");
    scanf("%d",&c);
    printf("Enter a number: ");
    scanf("%d",&d);

    if (a == b || a == c || a == d || b == c || b == d || c == d)
        printf("Some values are the same\n"); 
    else if(a>b && a>c && a>d)
        printf("a is greatest");
    else if (b>a && b>c && b>d)
        printf("b is greatest");
    else if (c>a && c>b && c>d)
        printf("c is greatest");
    else if (d>a && d>b && d>c)
        printf("d is greatest");

    return 0;
}