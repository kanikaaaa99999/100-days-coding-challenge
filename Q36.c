#include <stdio.h>

int main() {
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int min = (a < b) ? a : b;
    for (hcf = min; hcf > 0; hcf--) 
    {
        if (a % hcf == 0 && b % hcf == 0) 
        {
            break;
        }
    }
    printf("HCF (GCD) of %d and %d is %d\n", a, b, hcf);
    return 0;
}

