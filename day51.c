//Write a Program to take a sorted array(say nums[]) and 
//an integer (say target) as inputs. The elements in the sorted array might be repeated.
// You need to print the first and last occurrence of the target and print the index of first and last occurrence.
// Print -1, -1 if the target is not present.
#include <stdio.h>

int findOccurrence(int arr[], int length, int target, int findFirst) {
    int start = 0;
    int end = length - 1;
    int occurrenceIndex = -1;  

    while (start <= end) {
        int middle = (start + end) / 2;

        if (arr[middle] == target) {
            occurrenceIndex = middle;
            if (findFirst) {
                end = middle - 1;
            } else {

                start = middle + 1;
            }
        } else if (arr[middle] < target) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return occurrenceIndex;
}

int main() {
    int arraySize, targetNumber;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &arraySize);

    int numbers[arraySize];

    printf("Enter %d sorted numbers: ", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter target number to find: ");
    scanf("%d", &targetNumber);

    int firstIndex = findOccurrence(numbers, arraySize, targetNumber, 1);
    int lastIndex = findOccurrence(numbers, arraySize, targetNumber, 0);

    printf("First occurrence: %d, Last occurrence: %d\n", firstIndex, lastIndex);

    return 0;
}


/*Enter number of elements in sorted array: 6
Enter 6 sorted numbers: 1,2,3,4,5,6
Enter target number to find: First occurrence: -1, Last occurrence: -1*/