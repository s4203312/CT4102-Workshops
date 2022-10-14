#include "TaskClass.h"	//Including the header of class
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iostream>

bool TaskClass::is_number(const std::string& s)
{
	return false;
}

void TaskClass::GeneratingNumbers()
{
	bool is_number(const std::string & s)		//Checking if value is a number
	{
		return !s.empty() && std::find_if(s.begin(),
			s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
	}

	//Create some memory for our secret number
	int iSecret = 0;

	//Seed the random number generator
	srand(time(NULL));

	//Genterate our "random" number
	iSecret = rand() % 10 + 1;

	//Creating the variable guess
	int guess = 0;

	//Creating the variable correct
	bool correct = false;

	do {
		std::cout << "Please guess the number between 1 and 10";
		std::string character;

		std::cin >> character;

		//Performing validation checks on guess
		if (is_number(character))
		{
			guess = atoi(character.c_str());
		}


			//int length = character[];
			//for (int i = 0; i < length; ++i) {
			//	if (character[i] == ".") {
			//		printf("Incorrect value entered - format");
			//		break;
			//	}
			//}
			//


		else if (guess < 1 || guess > 10) {
			printf("Incorrect value entered - range");
			break;
		}
		else {
			//Checking if the users guess is equal to the number
			if (guess == iSecret)
			{
				printf("Well done you are correct!");
				correct = true;
				break;
			}
			else
			{
				printf("Wrong guess again");
			}
		}
	} while (correct != true);
}
