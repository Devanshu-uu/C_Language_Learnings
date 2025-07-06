#include<stdio.h>u
// int main(){
//     int a=4;
//     int* ptr = &a;
//     printf("The address of a is %u\n", ptr);
//     printf("The address of a is %u\n", &a);
//     ptr++;
//     printf("The increased value of ptr is %d\n", ptr);
int main(){
    char a="A";
    char* ptr = &a;
    printf("The address of a is %u\n", ptr);
    printf("The address of a is %u\n", &a);
    ptr++;
    printf("The increased value of ptr is %d\n", ptr);

    return 0;
}