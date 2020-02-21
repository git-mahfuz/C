#include <stdio.h>

int main() {

    int intArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numberToFind = 5;
    int lowIndex = 0, highIndex = 9, midIndex;

    int looped = 0;

    while(lowIndex <= highIndex) {

        looped++;

        midIndex = (lowIndex + highIndex) / 2;

        if (numberToFind == intArray[midIndex]) {
            break;
        } else if (numberToFind > intArray[midIndex]) {
            lowIndex = midIndex + 1;
        } else {
            highIndex = midIndex - 1;
        }
    }

    if (lowIndex > highIndex) {
        printf("Number not found in array after %d loop!", looped);
    } else {
        printf("%d found at index: %d after looping %d times", numberToFind, midIndex, looped);
    }

    return 0;
}
