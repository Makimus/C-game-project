#pragma once
#include "Sprite.h"

class Enemy : public Sprite
{
public:
	Enemy(SDL_Renderer* renderer,
		std::string pathToSurface, int _x, int _y);
private:
protected:
};

