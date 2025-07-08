#include <stdio.h>
#include <string.h>
char find;


int count=0;

char occurance_check(char str[]){
    
    for (int i = 0; i < strlen(str); i++)

    {
        if (str[i]==find)
        {
            count++;
        }
        

    }
    printf("This letter is %d times", count  );
    


}


int main(){
    printf("Enter a letter: ");
    scanf("%c", &find);
    
    
    char str[]={"mera naam dev hai mera khajana kaali sandook me hai"};
    
    
    occurance_check(str);


    return 0;
}