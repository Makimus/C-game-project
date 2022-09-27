#include "Player.h"

Player::Player(SDL_Renderer* renderer, std::string pathToSurface, int _x, int _y) :
	Sprite(renderer, pathToSurface, _x, _y)
{
}

void Player::HandleInput(SDL_Event& e)
{
	if (e.type == SDL_KEYDOWN) {
		switch (e.key.keysym.scancode) {
		case SDL_SCANCODE_W:
			std::cout << "moving up" << std::endl;
			
			yPosition -= 5;
			break;

		case SDL_SCANCODE_A:
			std::cout << "moving left" << std::endl;

			xPosition -= 5;
			break;

		case SDL_SCANCODE_S:
			std::cout << "moving down" << std::endl;

			yPosition += 5;
			break;

		case SDL_SCANCODE_D:
			std::cout << "moving right" << std::endl;

			xPosition += 5;
			break;
		}
	}
}


