#include <stdio.h>

int main() {
    int no1 = 27, no2 = 57, no3 = 7;

    if (no1 > no2) {
        if (no1 > no3) {
            printf("Greatest number = %d\n", no1);
        } else {
            printf("Greatest number = %d\n", no3);
        }
    } else {
        if (no2 > no3) {
            printf("Greatest number = %d\n", no2);
        } else {
            printf("Greatest number = %d\n", no3);
        }
    }

    return 0;
}
