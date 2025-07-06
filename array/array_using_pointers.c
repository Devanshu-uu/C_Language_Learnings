#include<stdio.h>

int main(){
    
    int marks[]={1,2,3,4};

    int* ptr=&marks[0];

    for (int i = 0; i < 4; i++)
    {
         printf("The address are %d\n" , marks[i] );
         printf("The address are %d\n" , *ptr );
         ptr++;
    }
    

   



    return 0;
}