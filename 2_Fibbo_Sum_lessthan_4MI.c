#include <stdio.h> 
#define Four_MI 4000000

unsigned long fibbo_sum () {
    unsigned long aux[4] = {1, 1, 1, 1};
    unsigned long my_sum;
    for (unsigned long i = 0; i < Four_MI; i++) {
        if (aux[3] % 2 == 0) {
           my_sum += aux[3]; 
        }
        aux[0] =  aux[3];
        aux[3] += aux[2];
        aux[1] =  aux[2];
        aux[2] =  aux[0];
    }
    return my_sum;
}

int main () {
    unsigned long sum = fibbo_sum();
    printf("Sum of even numbers from Fibbonacci sequence until 4 million: %lu", sum);
    return 0;
}
