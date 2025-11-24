//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;
    int choice;

    printf("Enter the traffic light number : ");
    scanf("%d", &choice);

    signal = (enum TrafficLight) choice;

    if (signal == RED) {
        printf("Stop!\n");
    } else if (signal == YELLOW) {
        printf("Wait!\n");
    } else if (signal == GREEN) {
        printf("Go!\n");
    } else {
        printf("Invalid input. Please enter 0, 1, or 2.\n");
    }

    return 0;
}
/*Enter the traffic light number : 1
Wait!*/
