/*Write a program to take two sorted arrays of size m and n as input.
 Merge both the arrays such that the merged array is also sorted. Print the merged array.*/
 #include <stdio.h>

int main() {
    int m, n;
    printf("Size of first array: ");
    scanf("%d", &m);

    int a[m];
    printf("Enter %d sorted numbers for first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Size of second array: ");
    scanf("%d", &n);

    int b[n];
    printf("Enter %d sorted numbers for second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}

/*Size of first array: 4
Enter 4 sorted numbers for first array:
4 2 3 2
Size of second array: 6
Enter 6 sorted numbers for second array:
5 5 5 4 3 2
Merged sorted array:
4 2 3 2 5 5 5 4 3 2*/