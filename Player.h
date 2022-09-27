#pragma once
#include "Sprite.h"

class Player : public Sprite
{
public:
	Player(SDL_Renderer* renderer,
		std::string pathToSurface, int _x, int _y);

	void HandleInput(SDL_Event& e);
private:

protected:
};

