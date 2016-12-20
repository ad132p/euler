#include <stdio.h> 


//TODO!!!
void Pali_loop () {
    for (int i = 999**2; int > 100**2; i--) {
        char Int_to_str[7];
        sprints(Int_to_str, "%d", i);

    }
}

int right = strlen(str);

// The following function checks whether a string is Palindrome:

int Palindrome(char *str, int left, int right) {
    if (str[left] == str[right]) {
        if (left >= right) {
            return 1;
        }
        Palindrome(str, left++, right--);
    }
    return 0;
}
