#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i; i++)
    {
        if (i == 11)
        {
            break;
        }

        printf(" %d X %d = %d\n", n, i, n * i);
    }
// other method
    int n1;
    printf("Enter number: ");
    scanf("%d", &n1);

    for (int i = 1; i <= 10; i++)
    {

        printf(" %d X %d = %d\n", n1, i, n1* i);
    }

    return 0;
}
