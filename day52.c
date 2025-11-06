/*Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/

#include <stdio.h>

int main() {
    int n, x, i, index = -1;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    
    //  the index of ceil
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break; 
        }
    }
    printf("%d\n", index); 
    return 0;
}


/*
output-   

Enter array size: 8
Enter 8 sorted elements: 2 3 4 5 6 7 8 1
Enter x: 9
-1*/ 