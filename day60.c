/*Write a program to take an integer array arr and an integer k as inputs. The task is 
to find the maximum element in each subarray of size k moving from left to right. 
Print the maximum elements for each window separated by spaces as output*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (window size): ");
    scanf("%d", &k);

    printf("Maximums in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d", max);
        if (i != n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}


/*output

Enter number of elements: 9
Enter the numbers: 1 2 3 1 4 5 2 3 6
Enter k (window size): 3
Maximums in each window: 3 3 4 5 5 5 6


*/