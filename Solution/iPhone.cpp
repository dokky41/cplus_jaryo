#include "iPhone.h"

iPhone::iPhone()
{
	volume = 0;
}

// Setter 
void iPhone::SetSoundControl(int volume)
{
	if (volume > 100 || volume < 0)
		return;

	this->volume = volume;
}


// Getter
int iPhone::GetVolume()
{
	return volume;
}