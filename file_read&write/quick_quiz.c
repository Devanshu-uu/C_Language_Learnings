#include <stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("dev2.txt", "r");

    if (ptr ==NULL)
    {
        printf("This file not exists!!!");
    }
    else{

        
        int num;
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
    }

    fclose(ptr);
        
        return 0;
    }