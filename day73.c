/*Read a text file and count the total number of characters, words, and lines. A word
 is defined as a sequence of non-space characters separated by spaces or newlines.*/

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int space = 1;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            space = 1;
        } else {
            if (space == 1) {
                words++;
                space = 0;
            }
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

/*Characters: 21
Words: 4
Lines: 1*/