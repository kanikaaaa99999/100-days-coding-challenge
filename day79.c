/*A file numbers.txt contains a list of integers separated by spaces. Read all integers,
 compute their sum and average, and print both.*/


#include <stdio.h>
int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float avg;
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Can't open file\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %f\n", avg);
    }

    return 0;
}

/*Sum = 145
Average = 29.000000*/