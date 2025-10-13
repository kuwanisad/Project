#pragma once
#include"Unit.h"

class Zombie : public Unit
{
public:
	Zombie();
	~Zombie();

	void Move() override;
	void Attack() override;
	void Dead() override;
};

