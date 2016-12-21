#include <stdio.h> 


//TODO!!!

// The following function checks whether a string is Palindrome:

int Palindrome(char *str, int left, int right) {
    if (str[left] == str[right]) {
        if (left >= right) {
            printf("Palindrome found! Largest Palindrome: %s\n", str);
            return 1;
        }
        Palindrome(str, left++, right--);
    }
    return 0;
}


void Pali_loop (int L, int R) {
    for (int i = 999**2; int > 100**2; i--) {
        char Int_to_str[7];
        sprints(Int_to_str, "%d", L * R);
        Palindrome(Int_to_str, 0, strlen(Int_to_str));
        if (L == R) {
            
        }
    }
}

int main () {

    int L, R;
    L = 999;
    R = L;
    Pali_loop(L, R);

}
