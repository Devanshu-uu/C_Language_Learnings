#include <stdio.h>
#include <string.h>
int main(){
    int a=strcmp("far", "nfar");
    int b=strcmp("far", "afar");
    int c=strcmp("far", "far");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}