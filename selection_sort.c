#include <stdio.h>

int main(void)
{
    int numbers[10] = {9, 2, 7, 10, 3, 1, 6, 8, 5, 4};
    int smallest;
    int swap_with;
    int temp;

    printf("\nBefore selection sorting the unsorted array is: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        smallest = numbers[i];
        swap_with = i;

        for(int j = i; j < 9; j++)
        {
            if(smallest > numbers[j+1])
            {
                smallest = numbers[j+1];
                swap_with = j+1;
            }
        }

        temp = numbers[i];
        numbers[i] = smallest;
        numbers[swap_with] = temp; 
    }

    printf("\n\nAfter selection sorting the sorted array is: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
