#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iostream>

//Declaring the functions here so i can use them later in the main function
float firstfunction(int int1, int int2, float float1);
bool secondfunction(float result);

void main()
{
	//Declaring variables
	int int1 = 0;
	int int2 = 0;
	float float1 = 0.0f;
	
	//Asking the user to input the first integer and assigning it to int1
	std::cout << "Please enter a whole number between 1 and 5";
	std::cin >> int1;
	//Asking the user to input the second integer and assigning it to int2
	std::cout << "Please enter a whole number between 1 and 5";
	std::cin >> int2;
	//Asking the user to input the float and assigning it to float1
	std::cout << "Please enter a decimal number between 1 and 2";
	std::cin >> float1;

	//Calls the functions using the paramenters and executes there code
	float result = firstfunction(int1, int2, float1);
	bool check = secondfunction(result);

	//Checking if the result of both functions has given a true or false
	if (check)
	{
		printf("After all calculations your value is smaller than the random number");
	}
	else
	{
		printf("After all calculations your value is larger than the random number");
	}
}

//Setting this function to return a float type of data
float firstfunction(int int1, int int2, float float1)
{
		//Performing a calcuation using the parameters and returning a result to the main function
		float result = (int1 + int2) * float1;
		return result;
}

//Setting this function to return a boolean type of data
bool secondfunction(float result)
{
	//Create some memory for our secret number
	int random = 0;

	//Seed the random number generator
	srand(time(NULL));

	//Genterate our "random" number
	random = rand() % 10 + 1;

	//Checking if the number we calculated is smaller that a randomly generated number
	if (result < random)
	{
		return true;
	}
	else
	{
		return false;
	}
}