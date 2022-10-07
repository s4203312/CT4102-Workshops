#include <iostream>

void main()
{
	int number = 0;
	int result = 0;

	std::cout << "Enter a number between 1 and 10";
	std::cin >> number;

	int result = recurse(number);

}

void recurse(int number)
{
	int i = 1;
	if (i != number)
	{
		i = i + i;
		recurse(number);
	}
	else
	{
		return i;
	}
}