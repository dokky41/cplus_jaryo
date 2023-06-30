#pragma once

#include <iostream>

// 선언부
// 변수와 함수 선언만 해줌 (접근지정자 포함)

class Weapon
{
protected :
	int m_attack;
	const int m_price;
	float m_criticalHit;

public:
	Weapon(int attack,float criticalHit,int price) : 
		m_attack(attack), 
		m_criticalHit(criticalHit),
		m_price(price)
	{};

	virtual ~Weapon();

	virtual void Stat();
	void Attack();


};

