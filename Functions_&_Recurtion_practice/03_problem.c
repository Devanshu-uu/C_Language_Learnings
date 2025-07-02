#include <stdio.h>
float force(float);
float force(float m)
{
    printf("The force is %.2f", m * 9.8);
    return m * 9.8;
}
int main()
{

    force(9);

    return 0;
}