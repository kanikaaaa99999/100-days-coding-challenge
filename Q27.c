#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += (2 * i - 1);
        }
        printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    }
    return 0;
}