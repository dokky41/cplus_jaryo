#include "Keyboard.h"
#include "iostream"

Keyboard::Keyboard()
{
	std::cout << "Keyboard ������ ȣ��" << std::endl;
}

void Keyboard::Input(char character)
{
	this->character = character;

	std::cout << character << std::endl;
}
