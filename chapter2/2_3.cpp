#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main(int argc, char const *argv[])
{
	unsigned u = 10, u2 = 42;
	cout << u - u2 << endl;
	cout << u2 - u << endl;

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;
	
	return 0;
}