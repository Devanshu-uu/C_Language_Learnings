#include <stdio.h>
#include <stdlib.h>



int main(){
    float *ptr;
    ptr=(float*) malloc(5 * sizeof(float));
    ptr[0]=112.22;
    ptr[1]=182.23;
    ptr[2]=183.23;
    ptr[3]=184.23;
    ptr[4]=185.23;

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    

    return 0;
}