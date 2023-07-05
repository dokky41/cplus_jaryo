#pragma once
#include <iostream>
#include <string>

using namespace std;


int main()
{

#pragma region 문자열 클래스(std::string)
	std::string string("문자열");
	std::string name;

	//std::cout << "string 변수의 값 : " << string << std::endl;
	//
	//string = "클래스";
	//
	//std::cout << "string 변수의 값 : " << string << std::endl;

	std::cout << "string 변수의 값을 입력해주세요. : ";
	std::cin >> string;

	std::cout << "name 변수의 값을 입력해주세요. : ";
	std::cin >> name;

	std::cout << std::endl;

	std::cout << "string : 변수의 값 :" << string << std::endl;
	std::cout << "name : 변수의 값 :" << name << std::endl;

	// 1. 띄어쓰기를 했을 때 출력이 이상하게 되는 부분 (이해하기)
	// 2. 이 문제점에 대해서 해결 방안 (찾아보기)

#pragma endregion

#pragma region 답안 getline()사용

//std::string string("문자열");
//std::string name;
//
//
//std::cout << "string 변수의 값을 입력해주세요. : ";
////std::cin >> string;	
////getline(cin, string, 'a'); // 특정 문자를 구분자로 사용가능
//getline(cin, string);
//
//std::cout << "name 변수의 값을 입력해주세요. : ";
////std::cin >> name;
//getline(cin, name);
//
//std::cout << std::endl;
//
//std::cout << "string : 변수의 값 :" << string << std::endl;
//std::cout << "name : 변수의 값 :" << name << std::endl;

/*
cin으로 입력을 받는 경우 공백을 구분자로 생각해서 입력을 받지않음

tab,띄어쓰기, 엔터등이 올 때 까지 문자를 받아들인 뒤
공백이 등장하면 공백 전까지를 저장시킴

즉, 일반적으로 띄어쓰기도 하나의 문자열의 정보로 받아들이기 위해서는
위의 방식처럼 활용할 수 없다는 것을 알 수 있다.

그래서 사용되는 것이 getline 함수이다.

또는 cin.getline() 으로 char* 형의 문자열을 받는것도가능

*/


#pragma endregion


	return 0;
}
