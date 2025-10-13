#include "World.h"
#include<iostream>
#include"Zombie.h"
#include"Skeleton.h"

using namespace std;

World::World()
{
	cout << "Game Start" << endl;

	Zombies = new Zombie[2];
	Skeletons = new Skeleton[2];
}

World::~World()
{
	delete[] Zombies;
	delete[] Skeletons;

	cout << "Game End" << endl;
}

void World::Tick()
{
	for (int i = 0; i < 2; ++i)
	{
		Zombies[i].Move();
		Skeletons[i].Move();
	}
}
