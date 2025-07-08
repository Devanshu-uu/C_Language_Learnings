#include <stdio.h>
#include <string.h>
char find;

int contains = 0;

char occurance_check(char str[])
{

    for (int i = 0; i < strlen(str); i++)

    {
        if (str[i] == find)
        {
            contains = 1;
            break;
        }
    }

    if (contains)
    {
        printf("Yess!! It contains");
    }

    else
    {
        printf("Noo!! Does not contains");
    }
}

int main()
{
    printf("Enter a letter: ");
    scanf("%c", &find);

    char str[] = {"dev"};

    occurance_check(str);

    return 0;
}