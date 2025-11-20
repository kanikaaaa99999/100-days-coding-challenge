/*Open an existing file in append mode and allow the user to enter a new line of text.
 Append the text at the end without overwriting existing content.*/
#include <stdio.h>

int main() {
    char filename[100];
    char text[200];
    FILE *file;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Can't open file\n");
        return 1;
    }

    getchar();

    printf("Enter a line to add: ");
    fgets(text, 200, stdin);

    fputs(text, file);

    printf("Text added to file successfully!\n");

    fclose(file);

    return 0;
}

/*Enter file name: kanika.c
Enter a line to add: my bestfriend is rizul
Text added to file successfully!*/