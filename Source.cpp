#include <iostream>
#include <limits.h>

int main() {
	unsigned long long a, b, sum;
	std::cin >> a >> b;
	if ((std::numeric_limits<unsigned long long>::max() - b > a) || (std::numeric_limits<unsigned long long>::max() - a > b)) {
		sum = a + b;
		std::cout << sum;
	}
	else {
		std::cout << "Error!";
		return 0;
	}
}