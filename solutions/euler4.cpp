#include <algorithm>

bool isPalindrome(int num) {
    string number = to_string(num);
    string reversed = to_string(num);
    reverse(reversed.begin(), reversed.end());
    return number == reversed;
}

int euler4 () {
    int maxPalindrome = 0;
    for (int i = 100; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j)
            if (i*j > maxPalindrome && isPalindrome(i*j)) maxPalindrome = i*j;
    }
    return maxPalindrome;
}
