#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *name = malloc(sizeof(char) * 32); 

    printf("Enter your name: ");
    fgets(name, 32, stdin);

    printf("%s\n", name);

    free(name);

    return 0;
}
