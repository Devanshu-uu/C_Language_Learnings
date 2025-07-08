#include <stdio.h>
#include <string.h>

char encrypt(char str[]){
    
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;

    }
    printf("Your encrypted password is: ");
    printf("%s", str);


}


int main(){
    
    char str[9];
    printf("Enter a password  to encrypt of only length 8: ");
    gets(str);
    encrypt(str);


    return 0;
}