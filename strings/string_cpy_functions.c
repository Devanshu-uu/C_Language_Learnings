#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = {"dev"};
    char target[20];

    strcpy(target, str);
    printf("%s %s", str , target);

    return 0;
}