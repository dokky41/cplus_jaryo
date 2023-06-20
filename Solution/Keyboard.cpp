#include "Keyboard.h"
#include "iostream"

Keyboard::Keyboard()
{
	std::cout << "Keyboard 생성자 호출" << std::endl;
}

void Keyboard::Input(char character)
{
	this->character = character;

	std::cout << character << std::endl;
}
