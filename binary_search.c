#include <stdio.h>

int main(void)
{
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int search_for = 80;

    int start = 0;
    int end = 9;
    int mid;

    int iteration = 1;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if (numbers[mid] == search_for)
        {
            printf("Found after %d iterations.\n", iteration);
            return 0;
        }

        if(numbers[mid] > search_for)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        iteration++;
    }

    printf("Not found after %d iterations.\n", iteration);
    return 0;
}
