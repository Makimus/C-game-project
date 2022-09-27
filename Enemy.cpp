#include "Enemy.h"

Enemy::Enemy(SDL_Renderer* renderer, std::string pathToSurface, int _x, int _y) :
	Sprite(renderer, pathToSurface, _x, _y)
{
}
