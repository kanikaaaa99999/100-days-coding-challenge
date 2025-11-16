//Write a program to take an input array of size n. The array should contain
 //all the integers between 0 to n except for one. Print that missing numbe

 #include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers from 0 to %d (one missing):\n", n, n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int expected = n * (n + 1) / 2;
    int missing = expected - sum;
    printf("The missing number is: %d\n", missing);

    return 0;
}

/*Enter the value of n: 7
Enter 7 numbers from 0 to 7 (one missing):
1 0 3 4 5 6 7  
The missing number is: 2*/