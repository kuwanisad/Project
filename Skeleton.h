#pragma once
#include"Unit.h"

class Skeleton : public Unit
{
public:
	Skeleton();
	~Skeleton();

	void Move() override;
	void Attack() override;
	void Dead() override;
};

