#include <stdio.h>

float average(float, float, float);

float average(float a, float b, float c)
{
    printf("The average is %.2f\n", (a + b + c) / 3);
    return (a + b + c) / 3;
}

int main()
{

    average(1, 3, 5);

    return 0;
}