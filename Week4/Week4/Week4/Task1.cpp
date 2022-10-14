#include <iostream>

int NumberGuess()
{
	int usernumber = 0;
	int counter = 0;


	while (usernumber != 5) {
		std::cout << "Input a number";
		std::cin >> usernumber;

		if (usernumber == 5) {
			std::cout << "Hey you werent supposed to enter 5";
			break;
		}
		else if(counter == 10) {
			std::cout << "Wow your more patient than I am, you win";
			break;
		}

		counter += 1;
	}
	
}
	