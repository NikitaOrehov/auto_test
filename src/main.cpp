#include <iostream>
#include "Vector.h"

int main() {
	Vector a(3);
	a.at(2) = 3;
	a[2] = 2;
	Vector b(3);
	Vector c = a + b;
	std::cout << "output: " << c[0] << " " << c[1] << " " << c[2] << "\n";
	std::cout << "output: " << c[0] << " " << c[1] << " " << c[2] << "\n";
	return 0;
}
