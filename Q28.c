#include <stdio.h>
int main()
{
    int n;
    int product = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("No even numbers in the given range.");
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            product *= i;
        }
        printf("The product of even numbers from 1 to %d is: %d\n", n, product);
    }
    return 0;
}