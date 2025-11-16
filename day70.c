/*Write a program to take a string input. Change it to sentence case.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("Enter your sentence: ");
    scanf("%[^\n]", s); 

    
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] = s[0] - 'a' + 'A';
    }

    printf("Sentence case: %s\n", s);

    return 0;
}

/*Enter your sentence: Hi IAM kAnikA
Sentence case: Hi iam kanika*/