#include <iostream>  

using namespace std; // std:: ��������
//int data = 56; // ������ ����

#pragma region namespace �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

//namespace A
//{
//	void Damage()
//	{
//		cout << "A ������ Damage() �Լ�" << endl;
//	}
//}
//namespace B
//{
//	void Damage()
//	{
//		cout << "B ������ Damage() �Լ�" << endl;
//	}
//}
#pragma endregion

// ����ü
struct Monster
{
	// ���� ���� �������� ��� ���

	void Skillc()
	{

	}
};

// Ŭ����
class Player
{
	// �Ӽ�
	// -> ����

	// ���
	// -> �Լ�
};

//using namespace A;
//using namespace B; (����)

// auto�� �Ű� ������ ����� �� �����ϴ�.
//void volume(int x)  // 4 byte
//{
//
//}

int main()
{

#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.

	// (���� ������) :: 

	//int data = 100; //���� ����

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� �� 
	// ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ��
	// �����ϹǷ� ���� ������ ȣ����� �ʽ��ϴ�.
	//std::cout << "Stack ������ �ִ� data�� �� : " << data << std::endl;
	//std::cout << "Data ������ �ִ� data�� �� : " << ::data << std::endl;


#pragma endregion

#pragma region namespace �̸�����

	//A::Damage();
	//B::Damage();
	//Damage();


#pragma endregion

#pragma region auto (�ڷ��� �߷�)
	// ����� ������ �ʱ�ȭ ���� ����Ͽ� 
	// �ش� ������ �߷��ϵ��� �����Ϸ����� �����ϴ� ����Դϴ�.
	
	// SDK ����Ʈ ��ġ
	// API �Լ�( )
	// PhotonManager( ), PlayFab( ) 30~40��

	//auto decimal = 6.25;
	//auto value = 100;

	// auto�� ����� �� ���� �ݵ�� �־��־�� �մϴ�.
	// ex) auto b; ( ERROR )

	// for�� :  for (�ʱⰪ; ���ǽ�; ������)

	// ���� ��� for�� (foreach)
	// for ( ���� �޴� ���� : ������ ����Ʈ(�迭,����Ʈ) )
	
	//int table[5] = { 1,2,3,4,5 };
	
	// ���� ���� ȣ��  (���� ��� �߻� -> & ������� �ذ�)
	//for (const auto & e : table)
	//{
	//	cout << e << endl;
	//}
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << table[i] << endl;
	//}


#pragma endregion

#pragma region Ŭ����
	// ����� ���� ������ �������� �Ӽ��� �Լ��� 
	// ���ԵǾ� ������, Ŭ������ ���� ��ü�� �����Ͽ�
	// �����ϰ� ����� �� �ִ� ����ü�Դϴ�.





#pragma endregion





	return 0;
}