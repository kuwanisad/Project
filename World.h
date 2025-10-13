#pragma once

class Zombie;
class Skeleton;

class World
{
public:
	World();
	~World();

	void Tick();

private:
	Skeleton* Skeletons = nullptr;
	Zombie* Zombies = nullptr;
};

