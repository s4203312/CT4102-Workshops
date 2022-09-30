#include <iostream>

void numbers()
{
	std::cout << "Input a number between 1 and 10";	//Arrows show direction of information flow. Used to let user input information

	int number = 0;
	std::cin >> number;	//Sets user input to a variable

	if (number > 5)	//Logical Operation Gates
	{
		printf("Number is greater than 5");
	}
	else if (number < 5)
	{
		printf("Number is less than 5");
	}
	else if (number == 5)
	{
		printf("Number is equal to 5");
	}
	else
	{
		printf("The number entered is invalid");
	}
}

void grade()
{
	std::cout << "Please input your score";	//Arrows show direction of information flow. Used to let user input information

	int grade = 0;
	std::cin >> grade;	//Sets user input to a variable

	if (grade >= 80)
	{
		printf("Grade is A*");
	}
	else if (grade >= 70 && grade <= 79)
	{
		printf("Grade is A");
	}
	else if (grade >= 60 && grade <= 69)
	{
		printf("Grade is B");
	}
	else if (grade >= 50 && grade <= 59)
	{
		printf("Grade is C");
	}
	else if (grade >= 40 && grade <= 49)
	{
		printf("Grade is D");
	}
	else if (grade >= 1 && grade <= 39)
	{
		printf("Grade is F");
	}
	else
	{
		printf("Grade is U");
	}
}

void prime()
{
	//? Need to work out how to do this
}

void coke()
{
	std::cout << "Please enter number 1 to 5";

	int drink = 0;
	std::cin >> drink;

	switch (drink)
	{
		case 1:
		{
			printf("You chose Coke");
			break;
		}
		case 2:
		{
			printf("You chose Pepsi");
			break;
		}
		case 3:
		{
			printf("You chose Dr Pepper");
			break;
		}
		case 4:
		{
			printf("You chose Sprite");
			break;
		}
		case 5:
		{
			printf("You chose Fanta");
			break;
		}
	}
}



int main()	//Main chunck of code goes here. Other sub function can be called
{
	
}
