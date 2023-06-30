#pragma once
#include <iostream>
#include "Sword.h"

using namespace std;

#pragma region ���� ���� ���ø�
// ���������� �μ��� �ްڴ�.

template <typename T>
void TemplatePrintf(T arg)
{
	cout << arg;
}

template <typename T, typename... Types>
void TemplatePrintf(T arg, Types... args)
{
	cout << arg << ",";
	TemplatePrintf(args...);
	std::cout << std::endl;
}


#pragma endregion


int main()
{
#pragma region �ٿ� ĳ����

	//// �� ĳ����
	//Weapon * weapon = new Sword;
	//weapon->Attack();
	//weapon->Stat();
	//
	//// �� ĳ���� ���¿��� �ٿ� ĳ����
	//Sword* sptr = (Sword*)weapon;
	//sptr->Attack();
	//sptr->Stat();


#pragma endregion

#pragma region ��� �̴ϼȶ�����
	//Weapon weaponItem(10,3.65f,1500);


#pragma endregion

#pragma region ���� ���� ���ø�
	//TemplatePrintf(10, 20, 30);
	//TemplatePrintf(1,'A', "String", 10.575f, 5, 6, 7);

#pragma endregion



	return 0;
}
