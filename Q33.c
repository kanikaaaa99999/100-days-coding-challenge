#include <stdio.h>
int main()          
{
int num, originalNum, remainder, n = 0, result = 0, i;
     printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        n++;
        originalNum /= 10;
    }
     originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        int power = 1;
        for (i = 0; i < n; i++)
        {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}