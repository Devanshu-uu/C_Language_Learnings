#include <stdio.h>
#include <string.h>

char decrypt(char str[]){
    
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;

    }
    printf("Your decrypted password is: ");
    printf("%s", str);


}


int main(){
    char str[9];
    printf("Enter a encrypted password of only length 8: ");
    gets(str);
    decrypt(str);


    return 0;
}