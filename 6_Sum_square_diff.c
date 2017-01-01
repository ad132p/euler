#include <stdio.h>

int sum_of_squares() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += (i * i);
    }
    return sum;
}

int square_sum() {
    int sq_sum = 0;
    for (int j = 1; j <= 100; j++) {
        sq_sum += j;
    }
    return sq_sum * sq_sum;
}

int main () {
    int result = square_sum() - sum_of_squares();
    printf("The difference between the sum of the squares of the first \n");
    printf("one hundred natural numbers and the square of the sum is: %d\n", result);
    return 0;
}
