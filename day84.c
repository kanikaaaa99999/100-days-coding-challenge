/*Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>
enum Result { SUCCESS, FAILURE, TIMEOUT };

int main() {
enum Result status;

status = SUCCESS;

    if (status == SUCCESS) {
        printf("Success: task completed\n");
    } else if (status == FAILURE) {
        printf("Failure: task failed\n");
    } else if (status == TIMEOUT) {
        printf("Timeout: took too long\n");
    } else {
        printf("Unknown status\n");
    }

    return 0;
}

//Success: task completed