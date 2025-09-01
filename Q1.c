//c program to input two integers and display their sum
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}