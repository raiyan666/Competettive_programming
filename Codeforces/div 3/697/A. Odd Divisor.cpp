#include <iostream>


void divisor(unsigned long long int x)
{
	if (x&(x-1 )) {
		std::cout << "YES\n";
		//return;
	}
	else std::cout << "NO\n";

}

int main()
{
	unsigned long long int t,x;
	std::cin >> t;
	while (t--)
	{
		std::cin >> x;
		divisor(x);
	}
	std::cin.get();

}
