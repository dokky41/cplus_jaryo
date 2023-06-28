#pragma once
#include <iostream>
#include <memory>

class Item
{
public:
	int price;
	std::weak_ptr<Item> ptr;

	// � �ڷ������� Ŭ���� ��� �Լ��� ��üȭ�ؾ� �ϴ���
	// �𸣱� ������ �޸𸮿� ���ǵ��� �ʾҽ��ϴ�.

	template <typename T>
	void Search(T data);

	// ��� ������ ������ ���� �ʽ��ϴ�.
	// cpp ���� ������ include �� ��� ���� ������ �����
	// �� �Դϴ�.

	// ������ cpp ���ϵ��� ���������� ������ �� ���Ŀ� �������� 
	// �Ϸ�� ���� ������Ʈ ���� cpp���ϳ��� ��ŷ�˴ϴ�.
	
	// ���� �Լ�
	static void Upgrade()
	{
		itemCode = 100;
		std::cout << "������ ���׷��̵�" << std::endl;
	}

	Item();
	~Item();

};

static int itemCode;

template<typename T>
inline void Item::Search(T data)
{
	std::cout << data << std::endl;
}