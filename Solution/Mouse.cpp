#include "Mouse.h"
#include "iostream"

Mouse::Mouse()
{
	std::cout << "Mouse ������ ȣ��" << std::endl;
}

void Mouse::OnDrag()
{
	std::cout << "Mouse Drag" << std::endl;
}
