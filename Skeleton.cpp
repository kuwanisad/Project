#include "Skeleton.h"
#include<iostream>

using namespace std;

Skeleton::Skeleton()
{
	cout << "Skeleton: spawned" << endl;
}

Skeleton::~Skeleton()
{
	cout << "Skeleton: destroyed" << endl;
}

void Skeleton::Move()
{
	cout << "Skeleton: move" << endl;
}

void Skeleton::Attack()
{
	cout << "Skeleton: attack" << endl;
}

void Skeleton::Dead()
{
	cout << "Skeleton: dead" << endl;
}
