#include <stdio.h>

int main()
{
    // int sum=0,i=1;
    // while (i<=10)
    // {
    //     sum += 8*i;
    //     i++;
    // }
    // printf("sum is %d", sum);

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("sum is %d", sum);

    return 0;
}