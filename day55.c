#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];

    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] == nums[i]) {
                count++;
            }
        }
        if(count > n/2) {
            printf("%d\n", nums[i]);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}


/*

output

Enter array size: 3
Enter 3 integers: 3 2 3
3*/
