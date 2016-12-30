#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sum(int lo, int hi)
{
	int sum = 0;
	while(lo <= hi)
	{
		sum += lo++;
	}

	return sum;
}

int main(int argc, char const *argv[])
{
	cout << "The sum is : " << sum(50, 100) << endl;

	return 0;
}