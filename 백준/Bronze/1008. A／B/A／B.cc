#include <iostream>
#include <cstring>

int main() {
    double a, b;

    while (1) {
        std::cin >> a >> b;
        if (a > 0 && b < 10 && b != 0)
            break;
        else
            continue;
    }

    std::cout.precision(15);
    std::cout << a / b;
	return 0;
}