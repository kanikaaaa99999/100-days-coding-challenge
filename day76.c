/*Ask the user for a filename. Check if it exists by trying to open it in read mode.
 If the file pointer is NULL, print an error message; otherwise, read and display its content.*/
#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    int ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("File does not exist \n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}

/*Enter file name: kanika.c
File content:

my bestfriend is rizul*/