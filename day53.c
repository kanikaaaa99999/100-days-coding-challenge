/*rite a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal 
to the sum of all the numbers strictly to the index's right. 
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
 This also applies to the right edge of the array. 
Print the leftmost pivot index. If no such index exists, print -1.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for(int i=0; i<n; i++) {
        total += arr[i];
    }
    int leftSum = 0;
    int found = -1;
    for(int i=0; i<n; i++) {
        
        if(leftSum == total - leftSum - arr[i]) {
            found = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", found);
    return 0;
}

/*
output- 
Enter array size: 6
Enter 6 integers: 1 7 3 6 5 6
3*/