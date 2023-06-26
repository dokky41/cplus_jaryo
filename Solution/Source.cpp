//#include <iostream>
#include "Marine.h"
#include "Ghost.h"

using namespace std; 

void Recovery(Unit * unit)
{
	unit->SetHP(200);
}

int main()
{
	// 업 캐스팅
	Marine marine; // 체력 100
	Ghost ghost; // 체력 50

	//Unit * uptr = &marine;
	//uptr->Skill();
	//
	//uptr = &ghost;
	//uptr->Skill();

	Recovery(&marine);  // 체력 200
	Recovery(&ghost);  // 체력 200

	cout << "마린 체력 : " << marine.GetHP() << endl;
	cout << "고스트 체력 : " << ghost.GetHP() << endl;


	return 0;
}
