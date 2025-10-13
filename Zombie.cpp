#include "Zombie.h"
#include<iostream>

using namespace std;

Zombie::Zombie()
{
	cout << "Zombie: spawned" << endl;
}

Zombie::~Zombie()
{
	cout << "Zombie: destroyed" << endl;
}

void Zombie::Move()
{
	cout << "Zombie: move" << endl;
}

void Zombie::Attack()
{
	cout << "Zombie: attack" << endl;
}

void Zombie::Dead()
{
	cout << "Zombie: dead" << endl;
}
