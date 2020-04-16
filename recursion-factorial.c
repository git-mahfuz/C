#include <stdio.h>

int fact(int n);

int main(void)
{
    int n;

    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %d\n", n, fact(n));

    return 0;
}

int fact(int n)
{
    if(n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
