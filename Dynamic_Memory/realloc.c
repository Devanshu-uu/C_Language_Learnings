#include <stdio.h>
#include <stdlib.h>



int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float *ptr;
    ptr=(float*) calloc( n , sizeof(float));
    printf("Enter %d number: ", n);


    
    

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ptr[i]);
    }

    int n1;
    printf("Enter the value of n1: ");
    scanf("%d", &n1);
    
    ptr=(float*) realloc( ptr, n1);
    printf("Enter %d number: ", n1);


    
    

    for (int i = 0; i < n1; i++)
    {
        scanf("%f", &ptr[i]);
    }
    
    return 0;
}