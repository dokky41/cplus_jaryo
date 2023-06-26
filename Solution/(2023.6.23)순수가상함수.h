#pragma once
#include "iostream"
#include "Marine.h"
#include "Sword.h"

using namespace std;

int main()
{
	// 순수 가상 함수

		// 하나의 순수 가상 함수를 가지는 클래스는 추상 클래스로 정의됩니다.
		// 추상 클래스는 객체를 생성할 수 없습니다.
		// Unit unit;

		// 추상 클래스는 포인터 타입으로 사용할 수 있습니다.
		// ex) Unit * ptr;

		//Marine marine;
		//marine.Skill();

		// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때
		// 객체 주소에 가상 함수 테이블을 추가합니다.
		//std::cout << "Marine 객체의 크기 : " << sizeof(marine) << std::endl;

	//

	// 가상 소멸자

		// 객체가 소멸될 때 현재 참조하고 있는 객체와
		// 상관없이 모두 호출되는 소멸자입니다.

		//Weapon* ptr = new Sword;
		//ptr->Attack();

		// 상속된 객체가 해제될 때 하위 클래스의 소멸자가
		// 먼저 실행되고 상위 클래스의 소멸자가 실행되어야
		// 하기 때문에 실행 시간에 메모리에 할당된 
		// 객체를 확인하고 차례대로 소멸시켜야 합니다.
		// delete ptr;

	//



		// Up-Casting (암묵적)
		// 하위 클래스의 정보를 담을 수 있는 객체에 상위 클래스의
		// 자료형을 부여해서, 상위클래스처럼 사용하게 하는 것입니다.	
		// ex)
	Sword s1;
	Weapon w1 = s1;





	return 0;
}
