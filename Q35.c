#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Please enter a positive integer.");
    }
    else
    {
        printf("Factors of %d are:\n", num);
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}