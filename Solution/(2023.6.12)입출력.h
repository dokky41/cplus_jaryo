#pragma once
#include <iostream>  // i:input - o: output

// C 언어 (출력 : printf(), 입력: scanf_s())
// C++ 언어 ( std::cout : 출력, std::cin : 입력)

// 스트림이란?
// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

// 레퍼런스 타입을 사용하여 복사비용을 줄일 수 있다, const를 통한 안전한 처리
//void function(const int & x)
//{
//	std::cout << "x의 값 : " << x << std::endl;
//}
int main()
{

#pragma region C++ 입출력



	//char a = 'A';
	//int b = 100;
	//float c = 9.81f;

	// (<< : 삽입 연산자 )
	// 자신이 참조한 값을 반환하는 연산자입니다.

	// std:endl : 개행
	//std::cout << (int)a << std::endl;
	//std::cout << b << "\n" << c << std::endl;


	//int data = 0;
	//int data1 = 0;

	// (>> : 추출 연산자)
	// 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 전달하는 연산자입니다.
	//std::cout << "입력 ";
	//std::cin >> data >> data1;
	//std::cout << "data의 값 : " << data << " data1의 값 : " << data1 << std::endl;

#pragma endregion

#pragma region C++ 동적 할당

	// c언어 
	// malloc()
	// free()

	// c++
	// new 메모리 할당
	// delete 메모리 해제

	//           ptr                 동적 할당한 메모리 4byte
	// [4 byte 메모리의 시작주소] ------> [][][][]
	//int* ptr = new int;

	// new 객체() 생성자를 호출합니다.
	// malloc() 생성자가 호출되지 않습니다.

	//*ptr = 100;
	//std::cout << *ptr << std::endl;
	//delete ptr;

	//배열                  // 4byte 4byte 4byte 
	//int* p = new int[3];  // [   ] [   ] [   ] 
	//
	//p[0] = 100;
	//p[1] = 200;
	//p[2] = 300;
	//
	//delete [] p;



#pragma endregion

#pragma region 참조자
	// 어떤 변수의 메모리 공간에 또 다른 이름입니다.(하나의 메모리 공간에 두개의 이름을 사용)
	// 메모리 공간을 가지고 있지 않음

	//int value = 10;

	//// 참조자 선언
	//int & other = value;
	//int & other1 = value;

	//std::cout << "value의 값 : " << value << std::endl;					
	//std::cout << "other의 값 : " << other << std::endl;								

	//other = 300;
	//other1 = 25;

	//function(value); //참조자를 사용하면 값이 변경됨

	//std::cout << "value의 값 : " << value << std::endl;
	//std::cout << "other의 값 : " << other << std::endl;

#pragma endregion






	return 0;
}