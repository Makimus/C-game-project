#include "GameObject.h"


GameObject::GameObject(int _x, int _y) :
	xPosition(_x),
	yPosition(_y)
{
}

void GameObject::SetXPosition(int _x)
{
	xPosition = _x;
}

int GameObject::GetXPosition()
{
	return xPosition;
}

void GameObject::SetYPosition(int _y)
{
	yPosition = _y;
}

int GameObject::GetYPosition()
{
	return yPosition;
}


