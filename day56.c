#include <stdio.h>

int main() {
    int n;
    printf("How many numbers will you enter? ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Next greater elements:\n");
    for(int i = 0; i < n; i++) {
        int found = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }
    
        printf("%d", found);
        if(i != n - 1) {
            printf(", "); 
        }
    }
    printf("\n");
    return 0;
}


/*
output-
How many numbers will you enter? 4
Enter 4 numbers:
1 3 2 4
Next greater elements:
3, 4, 4, -1*/