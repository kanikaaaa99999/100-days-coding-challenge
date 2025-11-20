/*Take two filenames from the user – a source file and a destination file.
 Copy all the content from the source file to the destination file using fgetc() and fputc(*/

#include <stdio.h>

int main() {
    
    char sourceFile[100];
    char destFile[100];

    FILE *sourcePtr;
    FILE *destPtr;

    int character;  

    printf("name of the source file: ");
    scanf("%s", sourceFile);

    printf("the name of the destination file: ");
    scanf("%s", destFile);

    sourcePtr = fopen(sourceFile, "r");
    if (sourcePtr == NULL) {
        printf("Could not open the source file\n");
        return 1; 
    }

    destPtr = fopen(destFile, "w");
    if (destPtr == NULL) {
        printf("Could not open the destination file\n");
        fclose(sourcePtr); 
        return 1; 
    }

    while ((character = fgetc(sourcePtr)) != EOF) {
        fputc(character, destPtr);
    }

    printf("SThe content has been copied from '%s' to '%s'.\n", sourceFile, destFile);

    fclose(sourcePtr);
    fclose(destPtr);

    return 0; 
}

/*name of the source file: info.txt
the name of the destination file: kanika.txt
SThe content has been copied from 'info.txt' to 'kanika.txt'.*/