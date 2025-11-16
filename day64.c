/*Write a program to take a string s as input. The task is to find the length of 
the longest substring without repeating characters. Print the length as output*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0}; 
        int currLen = 0;

        for (int j = i; j < n; j++) {
            char current = s[j];
            if (visited[(int)current] == 0) {
                visited[(int)current] = 1;
                currLen++;
            } else {
                break; 
            }
        }

        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("Longest substring length is: %d\n", maxLen);
    return 0;
}

/*Enter a string: abcd
Longest substring length is: 4*/