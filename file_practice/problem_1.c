#include <stdio.h>

int main()
{
   
    FILE *ptr;
    int num1 , num2 , num3;
    ptr = fopen("dev.txt", "r");
    
    fscanf(ptr, "%d %d %d" ,&num1,&num2,&num3);
    printf("%d %d %d\n" ,num1,num2,num3);


    

    return 0;
}