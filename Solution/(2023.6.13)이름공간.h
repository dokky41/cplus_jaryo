#pragma once
#include <iostream>  

using namespace std; // std:: 생략가능
//int data = 56; // 데이터 영역

#pragma region namespace 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

//namespace A
//{
//	void Damage()
//	{
//		cout << "A 개발자 Damage() 함수" << endl;
//	}
//}
//namespace B
//{
//	void Damage()
//	{
//		cout << "B 개발자 Damage() 함수" << endl;
//	}
//}
#pragma endregion

// 구조체
struct Monster
{
	// 여러 개의 변수들을 묶어서 사용

	void Skillc()
	{

	}
};

// 클래스
class Player
{
	// 속성
	// -> 변수

	// 기능
	// -> 함수
};

//using namespace A;
//using namespace B; (에러)

// auto는 매개 변수로 사용할 수 없습니다.
//void volume(int x)  // 4 byte
//{
//
//}

int main()
{

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자입니다.

	// (범위 연산자) :: 

	//int data = 100; //스택 영역

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때 
	// 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이
	// 존재하므로 전역 변수가 호출되지 않습니다.
	//std::cout << "Stack 영역에 있는 data의 값 : " << data << std::endl;
	//std::cout << "Data 영역에 있는 data의 값 : " << ::data << std::endl;


#pragma endregion

#pragma region namespace 이름공간

	//A::Damage();
	//B::Damage();
	//Damage();


#pragma endregion

#pragma region auto (자료형 추론)
	// 선언된 변수의 초기화 식을 사용하여 
	// 해당 형식을 추론하도록 컴파일러에게 지시하는 기능입니다.

	// SDK 임포트 설치
	// API 함수( )
	// PhotonManager( ), PlayFab( ) 30~40개

	//auto decimal = 6.25;
	//auto value = 100;

	// auto를 사용할 때 값을 반드시 넣어주어야 합니다.
	// ex) auto b; ( ERROR )

	// for문 :  for (초기값; 조건식; 증감식)

	// 범위 기반 for문 (foreach)
	// for ( 값을 받는 변수 : 데이터 리스트(배열,리스트) )

	//int table[5] = { 1,2,3,4,5 };

	// 값에 의한 호출  (복사 비용 발생 -> & 사용으로 해결)
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

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 
	// 포함되어 있으며, 클래스를 통해 객체를 생성하여
	// 접근하고 사용할 수 있는 집합체입니다.





#pragma endregion





	return 0;
}