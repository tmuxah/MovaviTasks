#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

void RemoveDuplicates(std::vector<int>& vec)
{
	std::unordered_set<int> tempSet;
	std::vector<int>::iterator it = vec.begin();

	for (const auto& value : vec)
		if (tempSet.insert(value).second)
			*it++ = value;

	vec.erase(it, vec.end());
}

int main()
{
	std::vector<int> vec = { 1, 2, 3, 4, 5, 7, 8, 1, 1, 5, 6, 7, 8, 9, 1, 4, 5, 7, 1 };
	RemoveDuplicates(vec);
	
	std::for_each(vec.begin(), vec.end(), [](int x) { std::cout << x << " "; });

	return 0;
}