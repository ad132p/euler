#include <stdio.h>
#include <stdbool.h>

bool Evenly_div(int i) {
    for (int j = 1; j <= 20; j++) {
        if (i % j != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1;; i++) {
        if (Evenly_div(i)) {
            printf("This number is evenly divisible by all of the numbers from 1 to 20: %d\n", i);
            return 0;
        }
    }
}
