/*Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.*/

#include <stdio.h>

int main() {
    FILE *file;
    int ch;
    int vowels = 0, consonants = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Can't open file\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
             {
            vowels++;
        }

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(file);

    return 0;
}

/*Vowels: 11
Consonants: 17*/