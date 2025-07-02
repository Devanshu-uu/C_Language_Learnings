#include <stdio.h>

float c2f(float);

float c2f(float c)
{
    printf("The ferenhit temp is %.1f", (9.0 / 5.0) * c + 32);
    return (9.0 / 5.0) * c + 32;
}

int main()
{

    c2f(34);

    return 0;
}