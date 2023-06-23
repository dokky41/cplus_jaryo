#pragma once

#include <iostream>

// 선언부
// 변수와 함수 선언만 해줌 (접근지정자 포함)

class Weapon
{
protected :
	int attack;

public:
	Weapon();
	virtual ~Weapon();

	virtual void Stat();
	void Attack();


};

