/*Store multiple student records (name, roll number, marks) into a file using fprintf().
 Then read them using fscanf() and display each record.
*/
#include <stdio.h>

int main() {
    FILE *f;
    char name[50];
    int roll, marks, n, i;

    f = fopen("students.txt", "w");
    printf("How many students? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter name roll marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }
    fclose(f);

    f = fopen("students.txt", "r");
    printf("\nRecords:\n");
    while (fscanf(f, "%s %d %d", name, &roll, &marks) == 3) {
        printf("%s %d %d\n", name, roll, marks);
    }
    fclose(f);

    return 0;
}

/*How many students? 2
Enter name roll marks: kanika 2 99
Enter name roll marks: reema 3 89

Records:
kanika 2 99
reema 3 89*/