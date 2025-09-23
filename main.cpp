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
    std::random_device rd;                          // 시드 생성기
    std::mt19937 gen(rd());                         // Mersenne Twister 엔진
    std::uniform_int_distribution<> dist(0, 51);   // 1~100 사이의 균등 분포

    int random_number = dist(gen);

    vector<int> arr(52, 0);

    for (int i = arr.size() - 1; i >= 0; --i)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < arr.size() * 0.5f; i++)
    {
        int index1 = dist(gen);
        int index2 = dist(gen);

        int swap_num = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = swap_num;
    }

    for (int i = arr.size() - 1; i >= 0; --i)
    {
        cout << arr[i] << endl;
    }

	return 0;
}