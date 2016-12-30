#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
	Sales_item myitem;
	for (; std::cin >> myitem; )
	{
		std::cout << myitem << std::endl;
	}

	return 0;
}