#include <stdio.h>
#include <string.h>

struct empolyee
{
    int id;
    char names[100];
    int salary;
    
};

int main()
{
    struct empolyee e1, e2, e3;

    printf("Enter name of first person: \n");

    scanf("%s", e1.names);
    printf("Enter name of second person: \n");
    scanf("%s", e2.names);
    printf("Enter name of third person: \n");
    scanf("%s", e3.names);

    
    printf("Enter id of first person: \n");
    scanf("%d", &e1.id);
    
    printf("Enter id of second person: \n");
    scanf("%d", &e2.id);
    
    printf("Enter id of third person: \n");
    scanf("%d", &e3.id);
    
    
    printf("Enter salary of first person: \n");
    scanf("%d", &e1.salary);
    printf("Enter salary of second person: \n");
    scanf("%d", &e2.salary);
    printf("Enter salary of third person: \n");
    scanf("%d", &e3.salary);
    
    
    
   printf("\nid | names     | salary\n");
printf("------------------------\n");
printf("%d  | %-10s | %d\n", e1.id, e1.names, e1.salary);
printf("%d  | %-10s | %d\n", e2.id, e2.names, e2.salary);
printf("%d  | %-10s | %d\n", e3.id, e3.names, e3.salary);


    return 0;
}