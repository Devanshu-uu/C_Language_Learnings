#include <stdio.h>
#include <string.h>
struct emp
{
    int id;
    char names[100];
    int salary;
    
};

int main(){

    struct emp facebook[100];

    struct emp dev={1,"dev", 19999};
  
    
    facebook[1].id=1;
    strcpy(facebook[1].names,"Dev");
    facebook[1].salary=100000;

    printf("%d %s %d\n",facebook[1].id,facebook[1].names,facebook[1].salary);
    
    printf("%d %s %d",dev.id,dev.names,dev.salary);
    return 0;
}