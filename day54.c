#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    int total_sum = n * (n + 1) / 2;

    int x = (int)sqrt(total_sum);

   
    if (x * x == total_sum && x >= 1 && x <= n) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}

/*
output-

Enter a positive integer n: 8
6*/