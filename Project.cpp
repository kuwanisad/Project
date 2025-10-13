// Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bit>
#include <vector>

using namespace std;

class UCharacter
{
public:
	float HPCurrent;
	float HPMax;

	void Move()
	{

	}
};

class UPlayer : public UCharacter
{
public:
	int Gold;

	void Attack()
	{

	}

	void PickUpGold()
	{

	}
};

class UMonster : public UCharacter
{
public:
	int GoldToDrop;

	void Dead()
	{
		DropGold();
	}

	void DropGold()
	{
		if (HPCurrent <= 0)
		{
			//골드 드롭 코드
		}
	}
};

class UWorld
{
	UPlayer Player;
	UCharacter Slime;
	UCharacter Boar;
	UCharacter Goblin;
};

int main()
{

	return 0;
}
