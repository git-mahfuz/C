#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    char *name;
    struct employee* next;
}
employee;

int main(void)
{
    employee* list = NULL;

    // Add an employee to the list
    employee* e1 = malloc(sizeof(employee));
    if(e1 == NULL)
    {
        return 1;
    }
    e1->name = "John";
    e1->next = NULL;
    list = e1;

    // Add another employee to the list
    employee* e2 = malloc(sizeof(employee));
    if (e2 == NULL)
    {
        return 1;
    }
    e2->name = "Matt";
    e2->next = NULL;
    list->next = e2;

    // Add another employee to the list
    employee* e3 = malloc(sizeof(employee));
    if(e3 == NULL)
    {
        return 1;
    }
    e3->name = "Micheal";
    e3->next = NULL;
    list->next->next = e3;

    // print list of employees
    for(employee* tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%s\n", tmp->name);
    }

    // free list
    while(list != NULL)
    {
        employee* tmp = list->next;
        free(list);
        list = tmp;
    }
    
    return 0;
}
