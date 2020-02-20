
#include <stdio.h>

int main()
{
    char alphabets[10] = {'a', 'b', 'c', 'e', 'f', 'a', 'e', 'g', 'h', 'i'};
    int intEquivalent[10], intCount[123];

    for (int k = 0; k < 10; k++) {
        intEquivalent[k] = (int) alphabets[k];
    }

    for (int i = 0; i < 123; i++) {
        intCount[i] = 0;
    }

    for (int j = 0; j < 10; j++) {
        intCount[intEquivalent[j]]++;
    }

    for (int l = 97; l <= 122; l++) {
        printf("%c\t%d\n", (char) l, intCount[l]);
    }

    return 0;
}
