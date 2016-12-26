#include <stdio.h>
#include <string.h>

//TODO!!!

// The following function checks whether a string is Palindrome:

int Palindrome(char *str, int left, int right) {
    for (;left <= right; left++, right--) {
        printf("%d    %d\n", left, right);
        if (str[left] != str[right - 1]) {
            printf("You have failed\n");
            return 0;
        }
    }
    printf("You have succeeded!!!\n");
    return 1;
}

void Pali_loop(int *p_left, int *p_right) {
    for (int i = 100; i < *p_right; *p_right--) {
        int begin = 0;
        char product[7];
        sprintf(product, "%d", *p_left * *p_right);
        int end = strlen(product);
        if (Palindrome(product, begin, end - 1)) {
            printf("Multipliers:%d, %d\n", *p_left, *p_right);
            printf("Product:%d\n", *p_left * *p_right);
        }
    }
}

int main () {
    int left, right;
    int *p_left, *p_right;
    p_left = &left;
    p_right = &right;
    left = 999;
    right = left;
    Pali_loop(p_left, p_right);
    return 0;
}
