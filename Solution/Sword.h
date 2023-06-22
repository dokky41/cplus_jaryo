#pragma once

#include "Weapon.h"

class Sword : public Weapon
{
public:
	virtual void Stat() override;
	void Attack();


};

