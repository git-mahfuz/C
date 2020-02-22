#include <stdio.h>

int calculateLengthOfAString(char string[])
{
    int i, length = 0;

    for(i = 0; string[i] != '\0'; i++) {
        length++;
    }

    return length;
}

int main()
{
    char firstName[] = "John";
    char lastName[] = "Doe";
    int firstNameLength, lastNameLength, fullNameLength;
    int i, j;

    firstNameLength = calculateLengthOfAString(firstName);
    lastNameLength = calculateLengthOfAString(lastName);
    fullNameLength = firstNameLength + lastNameLength + 2;

    char fullName[fullNameLength];

    for(i = 0, j = 0; i < firstNameLength; i++, j++)
    {
        fullName[j] = firstName[i];
    }

    fullName[j] = ' ';
    j++;

    for(i = 0; i < lastNameLength; i++, j++)
    {
        fullName[j] = lastName[i];
    }

    fullName[j] = '\0';

    printf("%s", fullName);

    return 0;
}
