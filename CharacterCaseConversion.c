#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("%c", (int) c - 32);
    } else if (c >= 'A' && c <= 'Z') {
        printf("%c", (int) c + 32);
    } else {
        printf("Not eligible to convert!");
    }
    
    return 0;
}
