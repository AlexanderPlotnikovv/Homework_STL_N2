#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main()
{
	int size;
	std::cin >> size;
	std::vector <int> vector(size);
	for (int i = 0; i != size; ++i)
	{
		int a;
		std::cin >> a;
		vector[i] = a;
	}
	std::set <int> set;
	for (auto vec : vector)
	{
		set.insert(vec);
	}
	std::vector<int>vec(set.begin(), set.end());
	std::sort(vec.begin(), vec.end(), [](int a, int b)
		{
			return a > b;
		});
	for (auto elem : vec)
	{
		std::cout << elem << std::endl;
	}
	return 0;
}