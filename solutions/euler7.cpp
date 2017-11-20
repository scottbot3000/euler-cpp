#include <cmath>

bool isPrime(int num) {
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int euler7 () {
    int n = 15;
    int primeNumbers = 6; // we already know 2, 3, 5, 7, 11, 13
    while (primeNumbers <= 10000) {
        if (isPrime(n)) primeNumbers++;
        n += 2;
    }
    return n - 2;
}
