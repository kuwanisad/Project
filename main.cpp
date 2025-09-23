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
    int BallCount = 51;

    std::random_device rd;                          // 시드 생성기
    std::mt19937 gen(rd());                         // Mersenne Twister 엔진
    std::uniform_int_distribution<> dist(0, BallCount - 1);   // 1~100 사이의 균등 분포

    int random_number = dist(gen);

    vector<vector<int>> arr(BallCount, vector<int>());

    for (int i = 1; i <= BallCount; ++i)
    {
        arr[dist(gen)].emplace_back(i);
    }

    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = 0; j < arr[i].size(); ++j)
        {
            cout << arr[i][j] << endl;
        }
    }

	return 0;
}