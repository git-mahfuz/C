#include <stdio.h>

int main(void)
{
    FILE* ptr = fopen("readmore.txt", "r");
    
    char ch;
    while( (ch = fgetc(ptr)) != EOF )
        printf("%c", ch);

    return 0;
}
