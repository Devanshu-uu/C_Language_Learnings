#include<stdio.h>

int main(){
    
    char character;
    
    printf("Enter The Characters: \n");
    scanf("%c",&character);

    

    

    if(character>=97 && character<=122)
        printf("The Character is lowercase\n");

    else
        printf("The Character is not lowercase\n");



    return 0;
}