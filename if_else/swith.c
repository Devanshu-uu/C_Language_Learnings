#include<stdio.h>

int main(){
    int a;\
    printf("Enter a: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("You entered a\n");
        break;
    case 2:
        printf("You entered b\n");
    case 3:
        printf("You entered c\n");
        break;
    case 4:
        printf("You entered d\n");
    default:
        printf("Nothing Matched");
        
    }
    return 0;
}