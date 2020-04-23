#include <stdio.h>

int main(void)
{
    FILE* ptr1 = fopen("readmore.txt", "r");
    FILE* ptr2 = fopen("copy-of-readmore.txt", "a");

    char ch;
    while( (ch = fgetc(ptr1)) != EOF )
        fputc(ch, ptr2);

    return 0;
}
