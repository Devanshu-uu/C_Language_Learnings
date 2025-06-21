#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You are eligible and You are senior");
    }

    else if (age > 40)
    {
        printf("You are eligible and You are elder");
    }
    else if (age > 18)
    {
        printf("YOu are eligible");
    }

    else
    {
        printf("You are not eligible");
    }

    return 0;
}