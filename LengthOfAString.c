#include <stdio.h>

int calculateLength(char str[])
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    return length;
}

int main()
{
    char name[100];

    gets(name);

    printf("%d", calculateLength(name));

    return 0;
}
