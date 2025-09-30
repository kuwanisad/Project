// Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bit>
#include <vector>

using namespace std;

long long Solution(long long InputCount)
{
	long long Answer = 0;
	bool flag = false;

	for (; InputCount > 0; --InputCount)
	{
		long Number;
		cin >> Number;

		long Temp = 1 << std::bit_width(static_cast<unsigned long long>(Number));

		if (Temp < Number)
			Temp <= 1;

		if (flag)
		{
			Answer ^= Temp;
		}
		else
		{
			flag = true;
			Answer = Temp;
		}
	}

	return Answer;
}

int main()
{
	cout << Solution(3);

	return 0;
}
