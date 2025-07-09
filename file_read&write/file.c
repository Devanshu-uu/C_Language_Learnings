#include <stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("dev.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);

    return 0;
}