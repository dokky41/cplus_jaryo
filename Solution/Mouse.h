#pragma once
#include "Device.h"

class Mouse : public virtual Device
{
private:
	int sensor;


public:
	int price;

	Mouse();
	void OnDrag();

};

