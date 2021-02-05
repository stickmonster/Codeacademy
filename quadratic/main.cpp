#include <iostream>
#include <cmath>
#include <math.h>

int main() {


	double a, b, c;
	double root1, root2;


	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;

	root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);

	root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	std::cout << "The roots of this equation are: " << root1 << " and " << root2;
}