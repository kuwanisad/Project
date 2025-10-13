#pragma once
class Unit
{
public:
	Unit();
	~Unit();

	virtual void Move();
	virtual void Attack();
	virtual void Dead();
};

