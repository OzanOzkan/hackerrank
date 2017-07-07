#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct mincomparator
{
	bool operator()(const int& l, const int& r)
	{
		return l < r;
	}
};

struct maxcomparator
{
	bool operator()(const int&l, const int& r)
	{
		return l > r;
	}
};

priority_queue<float, vector<float>, mincomparator> min_numbers;
priority_queue<float, vector<float>, maxcomparator> max_numbers;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	
	float median;

	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];

		if (a_i == 0)
		{
			min_numbers.push(a[a_i]);
		}
		else
		{
			if (a[a_i] < min_numbers.top())
				min_numbers.push(a[a_i]);
			else
				max_numbers.push(a[a_i]);
		}

		if (min_numbers.size() - max_numbers.size() == 2)
		{
			max_numbers.push(min_numbers.top());
			min_numbers.pop();
		}

		if (min_numbers.size() - max_numbers.size() == -2)
		{
			min_numbers.push(max_numbers.top());
			max_numbers.pop();
		}

		switch(min_numbers.size() - max_numbers.size())
		{
		case -1: median = max_numbers.top();
			break;
		case 0: median = (min_numbers.top() + max_numbers.top()) / 2;
			break;
		case 1: median = min_numbers.top();
                break;
		}

		printf("%.1f\n", median);
	}
	return 0;
}