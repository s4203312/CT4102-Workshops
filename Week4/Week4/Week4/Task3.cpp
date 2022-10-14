#include <iostream>

void printNumbers(){

	int usernumber = 0;
	int total = 0;

	std::cout << "Please enter a number between 1 and 9";
	std::cin >> usernumber;

	for (int i = 1; i <= usernumber; ++i) {
		std::cout << "The number is: " << i << "\n";
		total += i;
	}

	std::cout << "The total is: " << total << "\n";
}