#pragma once
#include "Weapon.h"

using namespace std; // std:: ��������

#pragma region ������
// Ŭ������ �ν��Ͻ��� �����Ǵ� ��������
// �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.

class Animal
{
	// ������(�ڱ��ڽ��� �̸�)
	// �������� ��� ��ü�� ������ �� �� �� ���� ȣ��Ǹ�, 
	// �����ڴ� ��ȯ���� �������� �ʽ��ϴ�.

	// �׷��Ƿ�, �����ڰ� ȣ��Ǳ� ������ ��ü�� ����
	// �޸𸮴� �Ҵ���� �ʽ��ϴ�.
	int age;

public:
	// default : �⺻ �����ڷ� ��������� �����ϴ� Ű����
	Animal() = default;


	Animal(int x)
	{
		age = x;
		cout << "������ ȣ��" << endl;
	}

	// ���� ������
	// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�.
	Animal(Animal& clone)
	{
		cout << "���� ������ ȣ��" << endl;
	}


	// �Ҹ���
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�.
	~Animal() //return 0 �� ���� ������
	{
		// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ ��
		// �� �ѹ��� ȣ��Ǹ�, �Ҹ��ڿ��� �Ű�������
		// �����Ͽ� ����� �� �����ϴ�.

		cout << "Animal ����" << endl;
	}

};

#pragma endregion

#pragma region �⺻ �Ű� ����
// �Ű� ������ �⺻ ���� �����Ͽ� �Լ��� ȣ��� �� 
// �μ����� ȣ��� �� �ֵ��� �����ϴ� �Ű� �����Դϴ�.

void Damage(int x = 100)
{
	cout << "x�� �� : " << x << endl;
}

// �⺻ �Ű� ������ ������ �� �����ʿ��� ���� �����մϴ�.
void Calculator(int x, int y = 100)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}


#pragma endregion



int main()
{

#pragma region ������ & �Ҹ���

	Animal animal1;
	Animal animal2 = animal1;
	Weapon weapon;

	weapon.Stat();
	Animal* aPtr = new Animal(10);
	delete(aPtr);

	int a = 10;
	int b(10);




#pragma endregion


#pragma region �⺻ �Ű� ����

	//Damage();
	//Damage(999);
	//Calculator(1);

#pragma endregion













	return 0;
}