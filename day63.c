/*Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. Print the kth smallest element as output.
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5*/


#include <stdio.h>

void bubbleSort(int arr[], int n) {
for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
        if (arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;    
        }
    }
}

int main() {
    int n, k;
    printf("How many numbers? ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter your numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Which smallest number do you want? (k) ");
    scanf("%d", &k);

    bubbleSort(arr, n);

    if (k >= 1 && k <= n) {
        printf("The %dth smallest is: %d\n", k, arr[k-1]);
    } else {
        printf("That's not a valid number for k!\n");
    }

    return 0;
}
 
/*How many numbers? 6
Enter your numbers:
6 7 8 4 5 1
Which smallest number do you want? (k) 1
The 1th smallest is: 1*/