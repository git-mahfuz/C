#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main(void)
{
    printf("The sum is: %d\n", sum(10000));

    return 0;

}
