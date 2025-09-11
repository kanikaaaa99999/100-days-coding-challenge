#include <stdio.h>
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Please enter a positive integer.");
    }
    else
    {
        int binary[32];
        int index = 0;
        while (num > 0)
        {
            binary[index] = num % 2;
            num = num / 2;
            index++;
        }
        printf("Binary representation: ");
        for (int i = index - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
        printf("\n");
        }
    return 0;
}