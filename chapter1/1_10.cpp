#include <iostream>

int main(int argc, char const *argv[])
{
	int hi = 10;
	int lo = 0;
	int sum = 0;
	while(hi >= lo)
	{
		sum += hi--;
	}
	std::cout << sum << std::endl;
	
	return 0;
}