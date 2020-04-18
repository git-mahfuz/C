#include <stdio.h>

int main(void)
{
    int n = 50;

    printf("%d\n", n); // outputs 50
    printf("%p\n", &n); // outputs e.g. 0x7ffe8d4f6d38
    printf("%d\n", *&n); // outputs 50

    return 0;
}
