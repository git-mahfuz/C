#include <stdio.h>

int main(void)
{
    int numbers[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int swap_counter = -1;
    int temp;

    printf("\nBefore bubble sorting the unsorted array is: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    while(swap_counter != 0)
    {
        swap_counter = 0;

        for(int i = 0; i < 10 - 1; i++)
        {
            if(numbers[i] > numbers[i+1])
            {
                swap_counter++;
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            }
        }
    }

    printf("\n\nAfter bubble sorting the sorted array is: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
