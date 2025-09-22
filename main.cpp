#include<iostream>
#include<conio.h>
#include<vector>
#include<windows.h>
#include<unordered_map>
#include<string.h>
#include<unordered_set>
#include<random>
#include<algorithm>

using namespace std;

int main()
{
	int StarLevel = 5;

	for (int i = StarLevel; i > 0; --i)
	{
		for (int j = 0; j < StarLevel - i; ++j)
			cout << " ";
		for (int j = 0; j < i; ++j)
			cout << "*";
		cout << endl;
	}

	return 0;
}