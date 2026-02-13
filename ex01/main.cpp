#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(T const& value)
{
	std::cout << value << " ";
}

template <typename T>
void increment(T& value)
{
	++value;
}

void shout(std::string const& value)
{
	std::cout << value << "! ";
}

int main()
{
	int numbers[5] = {0, 1, 2, 3, 4};
	std::cout << "numbers: ";
	::iter(numbers, 5, printElement<int>);
	std::cout << std::endl;

	::iter(numbers, 5, increment<int>);
	std::cout << "numbers after increment: ";
	::iter(numbers, 5, printElement<int>);
	std::cout << std::endl;

	std::string words[3] = {"hello", "template", "world"};
	std::cout << "words: ";
	::iter(words, 3, shout);
	std::cout << std::endl;

	const double constants[4] = {1.1, 2.2, 3.3, 4.4};
	std::cout << "constants: ";
	::iter(constants, 4, printElement<double>);
	std::cout << std::endl;

	return 0;
}
