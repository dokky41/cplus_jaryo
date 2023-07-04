#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>

// STL <array 라이브러리>
#include <array>

// STL <vector 라이브러리>
#include <vector>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void Keyboard(char key)
{
	if (_kbhit())
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

	}
}

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = 2 * x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


int main()
{

#pragma region STL 표준 템플릿 라이브러리
	// C++에서 사용할 수 있는 컨테이너 class와 알고리즘을
	// 일반화 시켜서 사용할 수 있는 자료구조를 포함하는 라이브러리입니다.

	/* std::array
	std::array<int, 5> STLarray{1,2,3,4,5};

	STLarray[0] = 10;
	std::cout << "STLarray의 크기 : " << STLarray.size() << std::endl;
	*/

	//-------------------------------------------------------------------------------------

		// std::vector 
		//std::vector<int> vector;
		//vector.push_back(10);
		//vector.push_back(20);
		//vector.push_back(30);
		//vector.push_back(40);
		//vector.push_back(50);
		//vector.push_back(60);
		//vector.push_back(70);
		//
		//vector.pop_back();
		//vector.pop_back();
		//vector.pop_back();
		//vector.pop_back();
		//vector.pop_back();
		//
		//std::cout << "capacity :  " << vector.capacity() << std::endl; 
		//std::cout << vector.size() << std::endl;
		//
		//for (int i = 0; i < vector.size(); i++)
		//{
		//	std::cout << vector[i] << std::endl;
		//}



	//---------------------------------------------------------------------------------------




#pragma endregion

#pragma region 리듬게임 

	CursorView();
	srand(time(NULL));

	char key;
	int hp = 3;

	std::vector<string> v = { "←", "→","↑","↓" };
	std::vector<string> v2(4, "");

	for (int i = 0; i < v.size(); i++)
	{
		v2[i] = v[rand() % v.size()];

	}

	while (1)
	{
		gotoxy(0, 0);
		cout << "랜덤 리듬게임 시작!   라이프 : " << hp << " \n" << endl;

		gotoxy(0, 3);
		for (int i = 0; i < v2.size(); i++)
		{
			cout << v2[i] << " ";
		}

		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
			{
				key = _getch();
			}


			switch (key)
			{
			case UP:
				if ("↑" == v2.back())
				{
					v2.pop_back();
				}
				else
				{
					hp--;
				}
				break;
			case LEFT:
				if ("←" == v2.back())
				{
					v2.pop_back();
				}
				else
				{
					hp--;
				}
				break;
			case RIGHT:
				if ("→" == v2.back())
				{
					v2.pop_back();
				}
				else
				{
					hp--;
				}
				break;
			case DOWN:
				if ("↓" == v2.back())
				{
					v2.pop_back();
				}
				else
				{
					hp--;
				}
				break;
			}


		}

		system("cls");


		if (hp == 0)
		{
			gotoxy(0, 8);
			cout << "클리어 실패!";
			break;
		}
		else if (v2.size() == 0 && hp != 0)
		{
			gotoxy(0, 8);
			cout << "게임 클리어!";
			break;
		}

	}



#pragma endregion

	return 0;
}
