#include <stdio.h>
#include <stdlib.h>



int main(){
    int *ptr;
    ptr=(int*) malloc(5 * sizeof(int));
    ptr[0]=11;
    ptr[1]=12;
    ptr[2]=13;
    ptr[3]=14;
    ptr[4]=15;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    

    return 0;
}