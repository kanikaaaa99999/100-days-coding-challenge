/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal 
to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is 
guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int nums[100], answer[100]; // lets keep max 100
    printf("Enter numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int p = 1;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                p = p * nums[j];
            }
        }
        answer[i] = p;
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}


/*output

Enter how many numbers: 4
Enter numbers: 1 2 3 4
Output: 24,12,8,6


*/