#include <iostream>
int main()
{
	const int n = 7;
	int i, a[n];
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for (i = 0; i < n; ++i)
		if (a[i] > 0 && a[i] % 2 == 1)
		{
			std::cout << a[i] << std::endl;
		}
	return 0;
}