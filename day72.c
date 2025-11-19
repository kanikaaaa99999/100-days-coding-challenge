/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
 The program should print all the lines to the console until EOF (end of file) is reached.*/

 #include <stdio.h>

int main() {
    FILE *fptr;
    char line[100];

    fptr = fopen("info.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}

//Name: Rahul
//Age: 23