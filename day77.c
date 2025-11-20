/*Write a program that reads text from input.txt, converts all lowercase 
letters to uppercase, and writes the result to output.txt.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("input.txt not found!\n");
        return 1;
    }

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Can't open output.txt\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32; 
        fputc(ch, output);
    }

    printf("All lowercase letters changed to uppercase \n");

    fclose(input);
    fclose(output);

    return 0;
}

/*All lowercase letters changed to uppercase 
 HELLO WORLD\nC PROGRAMMING*/