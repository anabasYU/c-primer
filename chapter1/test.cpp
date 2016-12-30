#include <iostream>

/*
 * 简单主函数
 * 读取两个数，求他们的和
 */

int main(int argc, char const *argv[])
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1  = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	return 0;
}