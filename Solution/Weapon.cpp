#include "Weapon.h"

// �Լ��� ��ü���� ������ �ۼ�

Weapon::Weapon()
{
	std::cout << "Weapon() ����" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon() �Ҹ�" << std::endl;
}

void Weapon::Stat()
{
	std::cout << "���� ���ݷ� : " << attack << std::endl;
}

void Weapon::Attack()
{
	std::cout << "����" << std::endl;
}

