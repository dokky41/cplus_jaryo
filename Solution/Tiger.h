#pragma once
#include "CarniVore.h"
#include "Lion.h"

class Tiger final : public CarniVore
{
public:
	// CarniVore 클래스에서 final로 
	// 선언된 함수는 더 이상 하위 클래스에서
	// 재정의 할 수 없습니다.
	// void Action();
	void FriendFunction(Lion lion)
	{
		lion.age = 5;
		lion.name = "Faker";

		std::cout << "Lion의 나이는 " << lion.age <<std::endl;
		std::cout << "Lion의 이름은 " << lion.name <<std::endl;
	}


};

