/*Write a program to take an integer array nums which contains only positive integers,
 and an integer target as inputs. The goal is to find two distinct indices i and j in
  the array such that nums[i] + nums[j] equals the target. Assume exactly one solution 
  exists and return the indices in any order. Print the two indices separated by a space as output. 
  If no solution exists, print "-1 -1".*/

  #include <stdio.h>

int main() {
    int n, target;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter numbers (all positive):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int found = 0;
    int idx1 = -1, idx2 = -1;

   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                idx1 = i;
                idx2 = j;
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    printf("%d %d\n", idx1, idx2);

    return 0;
}

/*Number of elements in array: 5
Enter numbers (all positive):
2 3 4 5 6
Enter target sum: 3
-1 -1*/