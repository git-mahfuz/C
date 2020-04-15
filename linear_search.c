#include <stdio.h>

int main(void)
{
    int numbers[10] = {2, 5, 3, 8, 7, 4, 9, 1, 6, 10};
    int search_for = 9;

    for(int i = 0; i < 10; i++)
    {
        if(numbers[i] == search_for)
        {
            printf("Found at index %d\n", i);
            return 0;
        }
    }

    printf("Not found. \n");
    return 0;
}
