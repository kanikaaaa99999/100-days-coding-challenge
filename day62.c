/*Write a program to take an integer array arr as input. The task is to find the maximum 
sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. 
If all elements are negative, print the largest (least negative) element.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];
    int currentTotal = arr[0];
    for (int i = 1; i < n; i++) {
        if (currentTotal > 0) {
            currentTotal = currentTotal + arr[i];
        } else {
            currentTotal = arr[i];
        }
        if (currentTotal > maxSum) {
            maxSum = currentTotal;
        }
    }

    printf("Maximum subarray sum is: %d\n", maxSum);
    return 0;
}


/*output

Enter number of elements: 6
Enter the numbers: 1 2 3 4 5 6 
Maximum subarray sum is: 21

*/