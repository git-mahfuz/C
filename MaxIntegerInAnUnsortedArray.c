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

int main()
{
    int intArray[] = {-100, 10, 30, 3, 71, 95, 32, 98, 1990, 970, 462}, n = 11, max;

    max = getMax(intArray, n);

    printf("%d", max);

    return 0;
}
