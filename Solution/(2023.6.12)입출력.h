#pragma once
#include <iostream>  // i:input - o: output

// C ��� (��� : printf(), �Է�: scanf_s())
// C++ ��� ( std::cout : ���, std::cin : �Է�)

// ��Ʈ���̶�?
// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�.

// ���۷��� Ÿ���� ����Ͽ� �������� ���� �� �ִ�, const�� ���� ������ ó��
//void function(const int & x)
//{
//	std::cout << "x�� �� : " << x << std::endl;
//}
int main()
{

#pragma region C++ �����



	//char a = 'A';
	//int b = 100;
	//float c = 9.81f;

	// (<< : ���� ������ )
	// �ڽ��� ������ ���� ��ȯ�ϴ� �������Դϴ�.

	// std:endl : ����
	//std::cout << (int)a << std::endl;
	//std::cout << b << "\n" << c << std::endl;


	//int data = 0;
	//int data1 = 0;

	// (>> : ���� ������)
	// ���ۿ� ������ ���� NULL ���ڱ����� ���� ���� ������ �����ϴ� �������Դϴ�.
	//std::cout << "�Է� ";
	//std::cin >> data >> data1;
	//std::cout << "data�� �� : " << data << " data1�� �� : " << data1 << std::endl;

#pragma endregion

#pragma region C++ ���� �Ҵ�

	// c��� 
	// malloc()
	// free()

	// c++
	// new �޸� �Ҵ�
	// delete �޸� ����

	//           ptr                 ���� �Ҵ��� �޸� 4byte
	// [4 byte �޸��� �����ּ�] ------> [][][][]
	//int* ptr = new int;

	// new ��ü() �����ڸ� ȣ���մϴ�.
	// malloc() �����ڰ� ȣ����� �ʽ��ϴ�.

	//*ptr = 100;
	//std::cout << *ptr << std::endl;
	//delete ptr;

	//�迭                  // 4byte 4byte 4byte 
	//int* p = new int[3];  // [   ] [   ] [   ] 
	//
	//p[0] = 100;
	//p[1] = 200;
	//p[2] = 300;
	//
	//delete [] p;



#pragma endregion

#pragma region ������
	// � ������ �޸� ������ �� �ٸ� �̸��Դϴ�.(�ϳ��� �޸� ������ �ΰ��� �̸��� ���)
	// �޸� ������ ������ ���� ����

	//int value = 10;

	//// ������ ����
	//int & other = value;
	//int & other1 = value;

	//std::cout << "value�� �� : " << value << std::endl;					
	//std::cout << "other�� �� : " << other << std::endl;								

	//other = 300;
	//other1 = 25;

	//function(value); //�����ڸ� ����ϸ� ���� �����

	//std::cout << "value�� �� : " << value << std::endl;
	//std::cout << "other�� �� : " << other << std::endl;

#pragma endregion






	return 0;
}