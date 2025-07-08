#include <stdio.h>

int main(){
    char str[6];

    for (int i = 0; i <5; i++)
    {
         scanf("%c",&str[i]);
         fflush(stdin);
    }
    str[5]='\0';
    for (int i = 0; i <5; i++)
    {
        printf("%c",str[i] );
        
    }
    
   
    return 0;
}