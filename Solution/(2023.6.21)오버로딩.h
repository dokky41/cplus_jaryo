#pragma once

#include "iostream"
#include "Vector3.h"

using namespace std;

#pragma region ������
// ���� ���� ���� �ٸ� ��ü�� ������ �����
// ���� �ٸ� ������� ó���� �� �ִ� ���


#pragma endregion

#pragma region �Լ��� �����ε�
	// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű�������
	// ���� �����Ͽ� ���� ���� ������ �� �ִ� ����Դϴ�.

void Add(int x, int y)
{
	std::cout << x + y << std::endl;
}

// �Լ��� �����ε��� ��� �Լ��� �Ű�������
// �����ϴ� �μ��� ���¸� ���� ȣ���ϹǷ�, ��ȯ������ �Լ��� �����ε��� ������ �� �����ϴ�.
// int Add(int x, int y)  // �Ұ���
// {
// 	return x + y;
// }

void Add(float x, float y)
{
	std::cout << x + y << std::endl;
}

#pragma endregion



int main()
{

#pragma region �Լ��� �����ε�

	//Add(10, 20);
	//Add(10.5f, 9.85f);
#pragma endregion

#pragma region ������ �����ε�

	Vector3 v1(2, 2, 2);
	v1.Print();

	Vector3 v2(3, 3, 3);
	v2.Print();

	Vector3 v3 = v1 + v2;
	v3.Print();

	// ���� ������
	// ex) ++,--

	// v4(1,1,1)
	Vector3 v4(1, 1, 1);
	++(++v4);
	v4.Print();

	// ++(++v4)


#pragma endregion



	return 0;
}
