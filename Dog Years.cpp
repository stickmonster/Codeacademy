#include <iostream>

int main() {

	int dog_age = 4; // The Dogs Age
	int early_years = 21;
	int later_years = (dog_age - 2) * 4;
	int human_years = early_years + later_years; // e

	std::cout << "My name is dog! Ruff ruff, I am " << human_years << " years old in human years.";
}