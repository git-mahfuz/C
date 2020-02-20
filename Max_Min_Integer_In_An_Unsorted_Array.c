#include <stdio.h>

int getMax(int array[], int n)
{
    int max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int getMin(int array[], int n)
{
    int min = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

int main()
{
    int intArray[] = {-100, 10, 30, 3, 71, 95, 32, 98, 1990, -20, -101, 970, 462}, n = 11, max, min;

    max = getMax(intArray, n);
    min = getMin(intArray, n);

    printf("Max : %d\n", max);

    printf("Min : %d\n", min);

    return 0;
}
