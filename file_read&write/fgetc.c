#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("dev.txt","w");
    // char c=fgetc(ptr);
    // printf("%c", c);

    fputc('c', ptr);
    
    return 0;
}