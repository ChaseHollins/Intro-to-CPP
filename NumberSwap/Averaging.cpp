#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	std::cout << ("Input 5 numbers to get the average");
	std::cin >> a >> b >> c >> d >> e;
	std::cout << "The average is: " << ((a+b+c+d+e)/5) << std::endl;
	system("pause");
}