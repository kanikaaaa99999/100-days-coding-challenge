/*Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the first negative integer in each subarray of size k moving from left to right.
  If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

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

    printf("First negatives in windows: ");
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0");
        }
        if (i != n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}


/*output

Enter number of elements: 5
Enter the numbers: -1 -3 7 8
Enter k (window size): 5
First negatives in windows: -1

*/