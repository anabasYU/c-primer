#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "Enter two values: ";
	int value1, value2;
	std::cin >> value1 >> value2;
	std::cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << std::endl;
	
	return 0;
}