#include <cmath>

int solution () {
	long largeNumber = 600851475143;
	for (int i = 2; i <= sqrt(largeNumber); i += 2)
    {
        while (largeNumber % i == 0)
            largeNumber /= i;
		if (i == 2) --i;
    }
	return largeNumber;	
}
