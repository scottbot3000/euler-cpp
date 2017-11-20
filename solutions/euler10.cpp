#include <cmath>

bool isPrime(int num) {
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

long euler10 () {
    long sumOfPrimes = 2;
    int n = 3;
    while (n < 2000000) {
        if (isPrime(n)) sumOfPrimes += n;
        n += 2;
    }
    return sumOfPrimes;
}
