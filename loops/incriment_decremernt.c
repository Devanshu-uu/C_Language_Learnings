#include<stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d \n",i );

    i=i+5;
    printf("The value of i is %d \n",i);
    
    
    
    // prints i first then incriments ,so 10 will prints
        printf("The value of i is %d \n",i++ );

    
    // incriments first then prints i ,so 12 will prints 
        printf("The value of i is %d \n",++i);

        printf("The value of i is %d \n ", i+=2);




    return 0;
}