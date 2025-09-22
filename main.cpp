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
	int num = 0;
	for (int i = 1; i <= 100; i++)
		num += i;

	cout << num << endl;

	num = 0;
	for (int i = 3; i <= 100; i += 3)
		num += i;

	cout << num << endl;

	return 0;
}