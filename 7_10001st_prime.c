#include <stdio.h>
#include <stdbool.h>

int is_it_prime(int number) {
    for (int j = 2; j < number; j++) {
        if (number % j == 0) {
            return false;
       }
    }
    return true;
}

int prime_counter() {
    int i = 2;
    int counter = 0;
    while (counter < 10001) {
        if (is_it_prime(i)) {
            counter++;
        }
        i++
    }
    return i - 1;
}

int main () {
    printf("10001st prime is: %d\n", prime_counter());
    return 0;
}
