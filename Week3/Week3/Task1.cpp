#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iostream>

void GeneratingNumbers()
{
	//Create some memory for our secret number
	int iSecret = 0;

	//Seed the random number generator
	srand(time(NULL));

	//Genterate our "random" number
	iSecret = rand() % 10 + 1;

	//Creating the variable guess
	int guess = 0;

	//Asking the user to input the number and assigning it to guess
	std::cout << "Please guess the number between 1 and 10";
	std::cin >> guess;

	//Checking if the users guess is equal to the number
	if (guess == iSecret)
	{
		printf("Well done you are correct!");
	}
	else
	{
		std::cout << "The number was " << iSecret;	//Telling them they were wrong and displaying the correct number
	}
}

void main()
{
	 GeneratingNumbers();
}