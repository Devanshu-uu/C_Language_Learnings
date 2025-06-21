#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    scanf("%d", &a); // & is Address of a to save value by user in a
    scanf("%f", &b);
    scanf("%c", &c);
    printf("You Typied %d\n",a);
    printf("You Typied %f\n",b);
    printf("You Typied %c\n",c);
    return 0;
} 