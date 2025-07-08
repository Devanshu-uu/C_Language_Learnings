#include <stdio.h>
#include <string.h>


typedef struct empolyee
{
    int id;
    char names[10];
    int salary;

}emp;

int main(){

    //or 
    /*typedef struct employee emp*/
    emp e1, e2;

    strcpy(e1.names, "Dev");
    e1.id=1;
    e1.salary=80000;
    printf("id|names|salary \n");
    
    printf("%-2d|%-5s|%-5d", e1.id,e1.names,e1.salary);




    
    return 0;
}