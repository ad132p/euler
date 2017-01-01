#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//TODO!!!

// The following function checks whether a string is Palindrome:

int Palindrome(char *str, int left, int right) {
    for (;left <= right; left++, right--) {
        if (str[left] != str[right]) {
            return 0;
        }
    }
    return 1;
}

void Pali_loop(char *result) {
    for (int left = 100; left < 999; left++) {
        for (int right = 100; right < 999; right++) {
            int begin = 0;
            char product[7];
            sprintf(product, "%d", left * right);
            int end = strlen(product);
            if (Palindrome(product, begin, end - 1)) {
                printf("Product:%d\n", left * right);
                if (left * right > atoi(result)) {
                    strcpy(result, product);
                }
            }
        }
    }
    return;
}

int main () {
    char result[7];
    Pali_loop(result);
    printf("Largest Palindrome: %s\n", result);
    return 0;
}
