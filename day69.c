/*Write a program to take an integer array as input. Only one element will be repeated.
 Print the repeated element. Try to find the result in one single iteration.*/

 #include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {       
        if (arr[i] > max)
            max = arr[i];
    }

    int freq[max + 1];
    for (int i = 0; i <= max; i++)
        freq[i] = 0;                   
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2) {        
            printf("Repeated number is: %d\n", arr[i]);
            break;
        }
    }

    return 0;
}

/*Enter number of elements: 4
Enter the numbers:
1 3 3 4
Repeated number is: 3*/