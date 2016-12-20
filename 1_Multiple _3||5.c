#include <stdio.h>

int main() {
    int sum = 0, counter = 0;
    while (counter < 1000) {
        if (counter % 3 == 0 || counter % 5 == 0 ) {
            sum += counter;
        } 
        counter++;
    }
    printf("Sum of all multiples of 3 or 5 is: %d", &sum);

    return 1/2;
}
