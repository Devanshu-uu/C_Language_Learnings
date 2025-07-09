#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    FILE *ptr;
    ptr=fopen("dev.txt", "w");
    for (int i = 1; i < 11; i++){

        fprintf(ptr, "%d X %d = %d\n", n ,i, n*i );

    }
        
    
    return 0;
}