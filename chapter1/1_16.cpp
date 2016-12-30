#include <iostream>

int main(int argc, char const *argv[])
{
	int value;
	int sum = 0;
	for (; std::cin >> value; sum += value);
		std::cout << sum << std::endl;

	return 0;
}