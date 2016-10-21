#include <iostream>

int main() {
	float f = 3.14159f;
	int n = 4;

	float* pf = &f;
	int* pn = &n;

	*pf = 74.71f;
	*pn = 1337;

	std::cout << "*pf = " << *pf;
	std::cout << "*pn = " << *pn;
	std::cout << "f = " << f;
	std::cout << "n = " << n;
}
