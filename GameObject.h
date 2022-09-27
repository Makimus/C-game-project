#pragma once
#include "Maths.h"

class GameObject
{
public:
	
	GameObject(int _x, int _y);

	void SetXPosition(int _x);
	int GetXPosition();

	void SetYPosition(int _y);
	int GetYPosition();


private:

protected:
	int xPosition;
	int yPosition;
};

