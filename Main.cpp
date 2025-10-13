#include<iostream>
#include"World.h"

using namespace std;

int main()
{
	World* MyWorld = new World();

	MyWorld->Tick();

	delete MyWorld;

	return 0;
}