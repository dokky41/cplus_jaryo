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
	// �� ĳ����
	Marine marine; // ü�� 100
	Ghost ghost; // ü�� 50

	//Unit * uptr = &marine;
	//uptr->Skill();
	//
	//uptr = &ghost;
	//uptr->Skill();

	Recovery(&marine);  // ü�� 200
	Recovery(&ghost);  // ü�� 200

	cout << "���� ü�� : " << marine.GetHP() << endl;
	cout << "��Ʈ ü�� : " << ghost.GetHP() << endl;


	return 0;
}
