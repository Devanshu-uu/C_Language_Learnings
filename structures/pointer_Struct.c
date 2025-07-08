#include <stdio.h>
#include <string.h>
struct emp
{
    int id;
    char names[100];
    int salary;
    
};

int main(){

    struct emp e1;
    e1.id=33;
    e1.salary=330000;
   
    
    struct emp *ptr;

    ptr=&e1;

    printf("%d %d\n", (*ptr).id,  (*ptr).salary);
    printf("%d %d\n", ptr->id,  ptr->salary);// other way to print

    


    
    
    
    return 0;
}