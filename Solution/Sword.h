#pragma once

#include "Weapon.h"

class Sword : public Weapon
{
public:
	Sword();
	~Sword();


	virtual void Stat() override;
	void Attack();


};

