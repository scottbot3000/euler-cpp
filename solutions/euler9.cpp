#include <cmath>

using namespace std;

int euler9 () {
    for (int a = 1; a < 333; ++a) {
        for (int b = a + 1; b < 666; ++b) {
            for (int c = b + 1; c < 1000; ++c) {
                if ((a + b + c) != 1000) continue;
                if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2)) return a * b * c;
            }
        }
    }
    return -1;
}
