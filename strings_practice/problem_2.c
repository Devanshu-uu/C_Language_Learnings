// #include <stdio.h>
// int strlen(char str[])
// {
    
//     int count = 0;

//     while (str[count] != '\0')
//     {
//         count++;
//     }
 

//     return count;
// }

// int main()
// {

//     char str[] = "Yeh Boy";

//     printf("%d", strlen(str));
//     return 0;
// }

#include <stdio.h>

int main(){
    char str[]={"deva"};
    int i =0,count;

    char c=str[i];

    while (c!='\0')
    {
        c=str[i];
        i++;

        
    }
    count=i-1;

    printf("%d", count);
    
    return 0;
}