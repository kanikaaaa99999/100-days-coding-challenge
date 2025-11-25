/*Create an enum for months and print how many days each month has.
*/

#include <stdio.h>
enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char *names[] = {
     "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

    for (int m = JAN; m <= DEC; m++) {
        printf("%s has %d days\n", names[m], days[m]);
    }

    return 0;
}

/*January has 31 days
February has 28 days
March has 31 days
April has 30 days
May has 31 days
June has 30 days
July has 31 days
August has 31 days
September has 30 days
October has 31 days
November has 30 days
December has 31 days*/