#include<stdio.h>

int main(){
    int product=1;
    int n;
    int i=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i<=n)
    {
        product*=i;
        i++;
    }
    printf("factorial is %d" , product);
    
    return 0;
}