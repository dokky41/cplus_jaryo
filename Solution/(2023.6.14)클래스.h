#pragma once
#include <iostream>  

using namespace std; // std:: ��������


// Ŭ����
class Player
{
	// ���� �����ڶ�?
	// Ŭ���� ���ο� ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� �������Դϴ�.

	// ����(public)
	// ��𼭵��� ������ �� �ִ� ���� �������Դϴ�.
public:
	const char* name; //������� 
	int data;

	void Information()
	{
		std::cout << "ĳ���� ����" << std::endl;
	}


	// �����(private)
	// Ŭ���� ���ο����� �Ӽ��� ������ �� ������, 
	// ���� �����ڸ� �������� ������ ������� ���� �����ڰ� �����˴ϴ�.
private:
	int hp;


	// ��ȣ(protected)
	// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���������� Ŭ������ �Ӽ��� 
	// ������ �� �ִ� ���� �������Դϴ�.
protected:
	float transformX;

};

class Job : public Player
{
public:
	void Select()
	{
		transformX = 100.0f;
	}
};

int main()
{

#pragma region Ŭ����
	// ����� ���� ������ �������� �Ӽ��� �Լ��� 
	// ���ԵǾ� ������, Ŭ������ ���� ��ü�� �����Ͽ�
	// �����ϰ� ����� �� �ִ� ����ü�Դϴ�.

	//Player player1; //stack
	//Player player2;
	//Player player3;

	// player.hp = 10; (private���Ұ�)

	//player1.data = 10;


	//// ����- ��Ʋ �����, �� ����� 


	//player1.name = "Bard";
	//player1.Information(); //
	// �տ� inline�� �پ�����  (std::cout << "ĳ���� ����" << std::endl;)�� �״�� �پ�����

	//cout << "player1�� ũ�� : " << sizeof(player1) << endl; //16byte ����Ʈ �е�����
	//cout << "player2�� ũ�� : " << sizeof(player2) << endl;
	//cout << "player3�� ũ�� : " << sizeof(player3) << endl;

	//Player * ptr = new Player;
	//ptr->data = 35;
	//cout << ptr << endl;
	//ptr->Information();
	//
	//delete(ptr);
	//
	//ptr = nullptr;
	//
	//if (ptr == nullptr)
	//{
	//	ptr = new Player; 
	//}
	//
	////ptr->data = 35;
	//cout << ptr << endl;

#pragma endregion





	return 0;
}