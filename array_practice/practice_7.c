#include <stdio.h>

int main()
{
    int arr[3][10];
    int n1, n2, n3;
    printf("Enter which table you wana see:  \n");

    scanf("%d %d %d", &n1,&n2,&n3);
    
    

    
    int mul[] = {n1, n2, n3};
    
    printf(" \n");
    printf(" \n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {

        printf("Tables are of %d \n", mul[i]);
        printf(" \n");

        for (int j = 0; j < 10; j++)
        {

            printf("%d X %d = %d \n", mul[i], j + 1, arr[i][j]);
        }
        printf(" \n");
    }

    return 0;
}