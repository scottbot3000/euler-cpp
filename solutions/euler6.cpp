#include <cmath>

int euler6 () {
    int sum = 0;
    int sumOfSquares = 0;
    for (int n = 1; n <= 100; ++n) {
        sum += n;
        sumOfSquares += std::pow(n, 2);
    }
    return std::pow(sum, 2) - sumOfSquares;
}
