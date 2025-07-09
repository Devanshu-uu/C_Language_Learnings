#include <stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("dev.txt", "a");

    int num=2323;
    fprintf(ptr ,"%d", num);
    fclose(ptr);

    return 0;
}