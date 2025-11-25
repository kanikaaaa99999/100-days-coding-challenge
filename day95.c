/*Return a structure containing top student's details from a function.
*/

#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

struct Student getTopStudent() {
    struct Student topStudent = {"kanika", 101, 95.5};
    return topStudent;
}

int main() {
    struct Student top = getTopStudent();

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.rollNumber);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

/*Top Student Details:
Name: kanika
Roll Number: 101
Marks: 95.50*/