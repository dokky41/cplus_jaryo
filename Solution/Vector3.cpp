#include "Vector3.h"


Vector3::Vector3(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector3::Print()
{
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "z = " << z << std::endl;
}

Vector3 Vector3::operator+(Vector3& clone)
{

	this->x += clone.x;
	this->y += clone.y;
	this->z += clone.z;

	return Vector3(x,y,z);
}

Vector3& Vector3::operator++()
{
	this->x += 1;
	this->y += 1;
	this->z += 1;

	return *this;
}


