/*Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (subarray size): ");
    scanf("%d", &k);

    int maxSum = -1000000;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);
    return 0;
}


/*output

Enter how many numbers: 4
Enter numbers: 100 200 300 400
Enter k (subarray size): 2
Maximum sum of subarray of size 2 is: 700


*/