#include <stdio.h>
#include <string.h>

//TODO!!!

// The following function checks whether a string is Palindrome:

int Palindrome(char *str, int left, int right) {
    for (;left <= right; left++, right--) {
        if (str[left] != str[right - 1]) {
            return 0;
        }
    }
    printf("You have succeeded!!!\n");
    return 1;
}

void Pali_loop(int left, int right) {
    for (int i = 100; i < right; right--) {
        for (int j = 100; j < left; left--) {
            int begin = 0;
            char product[7];
            sprintf(product, "%d", left * right);
            int end = strlen(product);
            if (Palindrome(product, begin, end)) {
                printf("Multipliers:%d, %d\n", left, right);
                printf("Product:%d\n", left * right);
                return;
            }
        }
    }
}

int main () {
    int left, right;
    left = 999;
    right = left;
    Pali_loop(left, right);
    return 0;
}
