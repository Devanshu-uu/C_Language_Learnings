#include <stdio.h>

int main(){
    int table[10];

     int n;
    printf("Enter table you wana print: ");
    scanf("%d", &n);


    for (int i = 0; i < 10; i++)
    {
        table[i]=n*(i+1);
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",n, i+1, table[i]);
    }
    
    

    return 0;
}