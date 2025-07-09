#include <stdio.h>
#include <stdlib.h>



int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float *ptr;
    ptr=(float*) calloc( n , sizeof(float));
    

    for (int i = 0; i < n; i++)
    {
        printf("%f\n", ptr[i]);
    }
    free(ptr);
    printf("New allocation\n");
    ptr=(float*) calloc( 2 , sizeof(float));
    for (int i = 0; i < 2; i++)
    {
        printf("%f\n", ptr[i]);
    }

    

    return 0;
}