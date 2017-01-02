#include <stdio.h>
#include <stdbool.h>

// TODO: `prime counter` function doesn't return correct value for i.

int is_it_prime(int number) {
    for (int j = 2; j < number; j++) {
        if (number % j == 0) {
            return false;
       }
    }
    return true;
}

int prime_counter() {
    int i = 0;
    int counter = 0;
    while (counter < 10001) {
        ++i;
        if (is_it_prime(i)) {
            ++counter;
        }
    }
    return i;
}



int main () {
    printf("10001st prime is: %d\n", prime_counter());
    return 0;
}
