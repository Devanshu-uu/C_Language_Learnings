#include <stdio.h>
#include <string.h>

int main(){
    char str1[]={"Dev "};
    char str2[]={"Bhai"};
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}