#include<stdio.h>

int main(){
    int arry[3][2];

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n ",i,j);
            scanf("%d",&arry[i][j]);
        }
        
    }
    
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]is %d\n",i,j, arry[i][j] );
            
        }
        
    }
    
    return 0;
}