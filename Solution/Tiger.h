#pragma once
#include "CarniVore.h"
#include "Lion.h"

class Tiger final : public CarniVore
{
public:
	// CarniVore Ŭ�������� final�� 
	// ����� �Լ��� �� �̻� ���� Ŭ��������
	// ������ �� �� �����ϴ�.
	// void Action();
	void FriendFunction(Lion lion)
	{
		lion.age = 5;
		lion.name = "Faker";

		std::cout << "Lion�� ���̴� " << lion.age <<std::endl;
		std::cout << "Lion�� �̸��� " << lion.name <<std::endl;
	}


};

