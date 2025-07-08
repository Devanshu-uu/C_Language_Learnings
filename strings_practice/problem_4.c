#include <stdio.h>



// #include <stdio.h>
int strlen(char str[])
{
    
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }
 

    return count;
}


void mystrcpy(char target[] , char source[]  ){

    for (int i = 0; i <= strlen(source); i++)
    {
        target[i]=source[i];
    }
    

}


int main(){

    char source[]="Dev Bhai";
    char target[40];
    mystrcpy(target , source);
    printf("%s %s", target, source);
    
    return 0;
}